class Solution {
public:
   int longestConsecutive(vector<int>& nums) {
    unordered_map <int , bool> hash ;
    for(int i : nums) hash[i] = false ;
    int currLen , ans = 0 ;

    for(int i : nums){
        currLen = 1 ;
        int now = i + 1 ;
        while(hash.count(now) && !hash[now]){
             currLen++ , hash[now] = true , now++ ;
        }
        now = i - 1 ;
        while(hash.count(now) && !hash[now]){
            currLen++ , hash[now] = true , now-- ;
        }
        ans = max(ans , currLen);
    }
    return ans ;
}
};