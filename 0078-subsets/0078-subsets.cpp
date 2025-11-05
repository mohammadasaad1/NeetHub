class Solution {
vector<vector<int>> ret = {};
public:
    vector <int> current_subset;
    void generate_subsets(int idx, vector<int>& nums) {
        if (idx == nums.size()) {
            ret.push_back(current_subset);
            return;
        }
        //pick item
        current_subset.push_back(nums[idx]);
        generate_subsets(idx + 1, nums);

        // leave item
        current_subset.pop_back();
        generate_subsets(idx + 1, nums);


    }
    vector<vector<int>> subsets(vector<int>& nums) {
        generate_subsets(0, nums);
        return ret;
    }
};
