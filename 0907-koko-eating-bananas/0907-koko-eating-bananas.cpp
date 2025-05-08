class Solution {
public:
int ans = -1 ; 
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = 1e9, n = piles.size();
        while(l < r){
            int m = l + (r - l) / 2; 
            int hrs = 0 ; 
            for(int i = 0 ; i < n; i++)
                hrs += ((piles[i] + m - 1) / m) ;
            if(hrs > h){
                l = m + 1; 
            }
            else r = m ;
            
        }
        return r ; 
    }
};