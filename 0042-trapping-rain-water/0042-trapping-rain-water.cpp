class Solution {
public:
    int trap(vector<int>& height) {
        const int n = height.size() ; 
        int pre[n]  , suff[n];
        pre[n - 1] = height[n - 1] ; 
        suff[0] = height[0] ;

        for(int i = n - 2 ; i >= 0 ; i--)
            pre[i] = max(height[i] , pre[i + 1]) ; 

    
        for(int i = 1 ; i < n ; i++)
            suff[i] = max(height[i] , suff[i - 1]) ; 

        int ans = 0 ; 
        for(int i = 0 ; i < n ; i++){
                cout << height[i] << " " << suff[i] << ' ' << pre[i]  << '\n'; 
                int t = min(suff[i] , pre[i]) - height[i] ; 
            ans += t > 0 ? t : 0  ;
        }
        return ans ; 
    }
};