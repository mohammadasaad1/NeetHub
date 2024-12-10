class Solution {
public:
    int maximumLength(string s) {
        int ans = -1, s_size = s.size();
        for (int i = 0; i < s_size; i++) {
            for (int j = 0; j < s_size; j++) {
                int cnt = 0;
                string a = s.substr(i, j + 1);
                set <char> st ;
                    for(char x : a)
                        st.insert(x) ;
                 if(st.size() > 1)
                        break;
                // cout << a << '\n' ;
                for (int k = 0; k + a.size() - 1 < s_size; k++) {

                    if (a == s.substr(k, a.size()))
                        cnt++;
                    // cout << cnt ;
                }
                if (cnt >= 3) {
                    
                   
                    ans = ans >= (long long)a.size() ? (long long)ans : (long long)a.size();
                }
            }
        }
        // cout << ans;
        return ans;
    }
};
