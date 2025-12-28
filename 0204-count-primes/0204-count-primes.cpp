class Solution {
public:
    
    int countPrimes(int n) {
        if (n <= 2) return 0;
        int ans = 0;
        vector<bool> res = sieve(n);
        for (int i = 2; i < n; i++)
            if (res[i] == true)
                ans++;

        return ans; 
    }
    vector<bool> sieve(int n) {
        vector<bool> is_prime(n, true);
        is_prime[0] = false;
        is_prime[1] = false;
        for (int i = 2; i * i < n; i++) {
            if (is_prime[i] == true)
                for (int j = i * i; j < n; j += i)
                    is_prime[j] = false;
        }
        return is_prime;
    }
};