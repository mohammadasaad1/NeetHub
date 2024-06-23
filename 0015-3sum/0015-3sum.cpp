class Solution {
public:
vector<vector<int>> threeSum(vector<int>& nums) {
        int n = (long long)nums.size() ; 
        sort(nums.begin() , nums.end()) ; 
        set <tuple <int , int , int>> st ; 
        for(int i = 0 ; i < n ; i++)
        {
            int l = i + 1 , r = n - 1 ;
            
            while (l < r)
            {
                int curr = nums[i] + nums[l] + nums[r] ;
                if(curr == 0)
                {
                    st.insert({nums[i] , nums[l] , nums[r]}) ; 
                    l++ , r-- ; 
                }
                else if(curr > 0)
                {
                    r-- ; 
                }
                else {
                    l++ ; 
                }
            }
             
        }
        vector<vector<int>> ret; 
        for(auto i : st)
        {
            vector <int> now = { get<0>(i) , get<1>(i) , get<2>(i)} ; 
            ret.push_back(now) ; 
        }
        return ret ; 
}
};