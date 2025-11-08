class Solution {

public:
    vector<vector<int>> ret;
    vector<int> current_combination;
    void combinator(vector<int>& candidates, int target, int path_sum , int idx) {
        if (path_sum > target) return;
        if (path_sum == target) {
            ret.push_back(current_combination);
        }
        for (int i = idx ; i < candidates.size() ; i++) {
            current_combination.push_back(candidates[i]);
            combinator(candidates, target, path_sum + candidates[i], i);
            current_combination.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        combinator(candidates, target, 0, 0);
        return ret;
    }
};
