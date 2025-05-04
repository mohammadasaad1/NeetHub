class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int n = dominoes.size();
        map <vector<int> , int> mp ;
        int pairs = 0 ; 
        for(auto domino : dominoes){
            sort(domino.begin(), domino.end()); 
            mp[domino]++;
        }
        for(auto i : mp){
        int c = i.second; 
            for(auto x : i.first){
                cout << x << ' ' ;
            }
            cout << c << '\n'; 
            if(c > 1)
            pairs += c * (c - 1) / 2 ;
}
        return pairs ;
    }
};