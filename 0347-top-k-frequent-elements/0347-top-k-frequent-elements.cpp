class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    priority_queue< pair<int, int> , vector<pair<int, int>>> sorted ;
    map <int , int> frq ;
    for(int i : nums)
        frq[i]++ ;
    pair<int, int> x ;

    for(auto i : frq) {
        x.first = i.second ; 
        x.second = i.first ;
        sorted.push(x) ; 
    }
    vector <int> ans ; 
    while (k--)
    {
        ans.push_back(sorted.top().second) ; 
        sorted.pop() ; 
    }
    return ans ; 
}
};