class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string> strs = {"eat","tea","tan","ate","nat","bat"}) {
        int idx = 1 ;
        vector < vector < string > > vec(10005) ;
        map < string , int > mp ;
        for(auto i : strs) {
            string s = i;
            sort(s.begin(), s.end()) ;
            if(mp[s] != 0){
                vec[mp[s]].push_back(i) ;
            }
            else {
                mp[s] = idx++ ;
                vec[mp[s]].push_back(i) ;
            }
        }
        vector<vector<string>> ans ; 
        for(auto i : vec) {
            if(i.size() != 0)
                ans.push_back(i) ; 
        }
        return ans ;
    }
};