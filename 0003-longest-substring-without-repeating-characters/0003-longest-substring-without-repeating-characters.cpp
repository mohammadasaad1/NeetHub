class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map <char , bool> seen ; 
        int l = 0 , r = 0 , mx = 0;
        while(r < s.size()){
            if(seen[s[r]]){
                seen[s[l]] = false ; 
                l++;
                
            }
            else {
                seen[s[r]] = true ; 
                mx = max(mx , r - l + 1);
                r++;
            }
        }
        return mx; 
    }
};