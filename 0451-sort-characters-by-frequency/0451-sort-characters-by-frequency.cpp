class Solution {
public:
  string frequencySort(string s) {
    map <char , int> mp;
    for(auto i : s) mp[i]++;
    
    string ss = ""; 
    vector<pair<char, int>> vec(mp.begin(), mp.end());


    sort(vec.begin(), vec.end(),
        [](const auto &a, const auto &b) {
            return a.second > b.second;  
        }
    );

    for (auto i : vec) {
        for (int j = 0 ; j < i.second; j++) ss.push_back(i.first); 
    }
 return ss; 
}
};