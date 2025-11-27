class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero, one, two;
        zero = one = two = 0;
        for(int i : nums){
            if(i == 0) zero++;
            if(i == 1) one++;
            if(i == 2) two++; 
        }
        int idx = 0;
        while(zero-- > 0) nums[idx++] = 0;
        while(one-- > 0) nums[idx++] = 1;
        while(two-- > 0) nums[idx++] = 2;
    }
};