class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int products = 1 , cntZero = 0;
    for(long long i : nums) products *= i , i == 0 ? cntZero++ : 0 ;

    vector<int> ans ;

    if(!products) // there is one zero
    {
        products = 1 ;
        for(long long j : nums)
            if(j != 0)
                products *= j ;
    }
    for(long long j : nums)
        ans.push_back(cntZero == 1 && j == 0 ? products : cntZero >= 1 ? 0 : products / j) ;

    return ans ;
}
};