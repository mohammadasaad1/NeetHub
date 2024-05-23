class Solution {
public:
   bool containsDuplicate(vector<int>& nums) {
    map <int , int> freq ;
    bool is = false ;
    for(int i : nums) {
        freq[i]++;
        if(freq[i] > 1)
        {
            is = true ;
            break ;
        }
    }
    return is ; 
}
};