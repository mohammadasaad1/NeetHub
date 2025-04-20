class Solution {
public:
    struct obj {
    int a , b , c;
    bool operator<(const obj& other) const {
        return tie(a, b, c) < tie(other.a, other.b, other.c);
    }
};
    set<obj> st;

void helper(int value , int startIdx , vector<int>& nums) {
    int l = startIdx , r = nums.size() - 1 , target = 0;

    while (l < r) {
        if ((nums[l] + nums[r] + value) == target) {
             st.insert({nums[l] , nums[r] , value });
            l++; 
        }
        else if (nums[l] + nums[r] + value > target)
            r--;
        else l++ ;
    }
}

vector<vector<int>> threeSum(vector<int>& nums) {
    // I'll sort them to speed up process
    sort(nums.begin(), nums.end());
    int n = (int)nums.size();
    for (int i = 0; i < n - 2; i++) {
        int kv = nums[i];

        // kv + iv + jv = 0 ; (*)
        // for now i have kv as a fixed value then i'll search for (*) using 2 pointers

        helper(kv , i + 1 , nums) ;
    }
    vector<vector<int>> res;
    for (auto &[a , b , c] : st) {
        res.push_back({a , b , c});
    }
    
    return res;
}
};