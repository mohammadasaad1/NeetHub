class Solution {
    bool dp[301];
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        dp[s.size()] = true;
        int n = s.size();
        for(int i = n - 1; i >= 0; i--){
            for(auto w : wordDict){
                if(i + w.size() <= n && s.substr(i , w.size()) == w)
                    dp[i] |= dp[i + w.size()];
                
                if(dp[i]) break; 
            }
        }
        return dp[0];
    }
};