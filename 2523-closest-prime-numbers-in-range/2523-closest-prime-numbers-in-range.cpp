class Solution {
public:
    vector<bool> sieve() {
        int n = 1e6 + 150;
        vector<bool> primes(n, true);
        primes[0] = primes[1] = false;
        for (int i = 2; i * i < n; i++) {
            if (primes[i] == true)
                for (int j = i * i; j < n; j += i)
                    primes[j] = false;
        }
        return primes;
    }
    vector<int> closestPrimes(int left, int right) {
        vector<bool> all_primes = sieve();
        vector<int> get_primes_in_range;
        for (int i = left; i <= right; i++) {
            if (all_primes[i])
                get_primes_in_range.push_back(i);
        }
        int sz = get_primes_in_range.size();

        if (sz <= 1)
            return {-1, -1};

        int l, r, mn = 1e7;
        l = r = -1;

        for (int i = 0; i < sz - 1; i++) {
            if (get_primes_in_range[i + 1] - get_primes_in_range[i] < mn) {
                l = get_primes_in_range[i], r = get_primes_in_range[i + 1];
                mn = get_primes_in_range[i + 1] - get_primes_in_range[i];
            }
        }
        return {l,r};
    }
};