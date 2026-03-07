class Solution {
public:
     int firstUniqChar(string s) {
        map <char, int> uniqueChars;

        int n = s.size();
        for (int i = 0 ; i < n ; i++)
            uniqueChars[s[i]]++;

        for (int i = 0 ; i < n ; i++) {
            if (uniqueChars.contains(s[i]) && uniqueChars[s[i]] == 1) return i;
        }
        return -1;
    }
};