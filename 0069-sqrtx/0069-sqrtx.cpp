class Solution {
public:
    int mySqrt(int x) {
        if (x == 1 || x == 0) return x ; 

        int l = 1 , r = x ; 
        long long  ans = 0 ; 
         
        while(l <= r){
            long long m = ((long long)l + (long long)r) / (long long) 2  ;
            long long now = (long long)m * m ; 

            if (now == x) return m ; 

            

            else if(now > x)
                r = m - 1; 
            else if(now < x) l = m + 1 , ans = max(ans , m); 
             
        }
        return ans ; 
    }
};