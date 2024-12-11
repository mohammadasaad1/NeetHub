class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        int r  = 0 , n = nums.size() , mx = 0 ;
        sort(nums.begin() , nums.end()) ;
        for(int i = 0 ; i < n ; i++) {
            while (r < n && nums[r] - nums[i] <= 2 * k)
                r++ ;
            mx = max(mx , r - i) ; 
        }
        return mx ; 
    }

};
