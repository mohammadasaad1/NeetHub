class Solution {
public:
   vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n = nums.size() ;
        int mn = nums[0] ;
        int idx = 0;
        
        while (k--){
            for(int i = 1 ; i < n ; i++) {

                if(mn > nums[i])
                    idx = i , mn = nums[i] ;
            }
            mn *= multiplier ;
            nums[idx] = mn ;
            mn = nums[0];
            idx = 0 ;
        }
        return nums ; 

    }
};