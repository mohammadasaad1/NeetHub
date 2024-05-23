class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector < pair < int , int > > pr ;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++) pr.push_back({nums[i], i});
        sort(pr.begin(), pr.end()) ;
        int i = 0 , j = n - 1 ;
        while(i <= j)
        {
            int x = pr[i].first + pr[j].first ;
            if (x > target)
                j-- ;

            else if (x < target) i++ ;
            else break ;
        }
        vector <int> v(2) ;
        v[0] = pr[i].second ; v[1] = pr[j].second ;
        return v ;
    }
};