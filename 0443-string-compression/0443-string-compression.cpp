class Solution {
public:
    void helper(string& s, int& writing, vector<char>& chars) {
        for (char ch : s)
            chars[writing++] = ch;
    }
    int compress(vector<char>& chars) {
        int n = chars.size();

        if (n == 1)
            return 1;

        int count, writing, reading;

        char current = chars[0];

        count = writing = reading = 0;

        while (reading < n) {

            if (current == chars[reading]) {
                count++, reading++;
                continue;
            }

            else if (count == 1) {
                chars[writing++] = current;

            } else {
                chars[writing++] = current;
                string s = to_string(count);
                helper(s, writing, chars);
            }

            count = 0;
            current = chars[reading];
        }

        // handle the last of the array
        if (count == 1) {
            chars[writing++] = current;
        } else {
            chars[writing++] = current;
            string s = to_string(count);
            helper(s, writing, chars);
        }
        return writing;
    }
};