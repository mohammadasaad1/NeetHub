class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // i'll edit the array to fit. 
        for(int &i : nums) i-- ; // nums[i] - 1
        int n = nums.size() ;
        for(int i = 0 ; i < n ; i++){
            int go = nums[i] % n ; // real number
            nums[go] += n; 
        }
        vector<int> ans ; 
        for(int i = 0 ; i < n ; i++){
            if(nums[i] / n == 2) ans.push_back(i + 1) ; 
        }
        return ans ; 
    }
};