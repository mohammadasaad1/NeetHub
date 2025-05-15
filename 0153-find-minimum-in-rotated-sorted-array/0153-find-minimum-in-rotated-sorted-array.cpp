class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size(); 
        int l = 0, r = n - 1;
        int ans = 5001;  
        while(l <= r){
            int m = l + (r - l) / 2;
            if(nums[m] < nums[r]){
                ans = min(nums[m], ans);
                r = m - 1;
            }
            else ans = min(ans , nums[r]) , l = m + 1;
        }
        return ans;
    }
};