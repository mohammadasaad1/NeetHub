class Solution {
public:
    vector<int> get_lps(string& pat) {
        int n = pat.size();
        vector<int> lps(n, 0);
        int len = 0, i = 1;
        while (i < n) {
            if (pat[i] == pat[len])
                lps[i] = ++len, i++;
            else {
                if (len > 0) {
                    len = lps[len - 1];
                } else
                    lps[i] = 0, i++;
            }
        }
        return lps;
    }


    string longestPrefix(string s) {
        int last = get_lps(s)[s.size() - 1]; 
        if(last == 0) return "";
        string ret = ""; 
        for(int i = 0 ; i < last ; i++) ret += s[i];
        return ret;
    }
};