class Solution {
public:
int search(vector<int>& nums, int target) {
        int n = nums.size() ;
        int l = 0 , r = n - 1;
        while(l <= r){
            int m = l + (r - l) / 2 ;
            if(nums[m] == target)
            return m;
            else if(nums[m] > target){
                r = m - 1; 
            }
            else l = m + 1;
        } 
    return -1;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size() , m = matrix[0].size();
        for(int i = 0 ; i < n ; i++)
            if(search(matrix[i], target) != -1)
            return true ;
        return false;
    }
};