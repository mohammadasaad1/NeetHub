class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size() ; 
        if(n == 1) return 1;

        int  count = 0; 
        char current = chars[0] ;
        int  writing = 0 , reading = 0;

        while(reading < n){

            if(current == chars[reading]) count++ , reading++;
            else if(count == 1){
                chars[writing++] = current; 
                count = 0;
                current = chars[reading];
            }
            else {
                chars[writing++] = current;
                string s = to_string(count);
                for(char ch : s)
                chars[writing++] = ch; 
                count = 0;
                current = chars[reading];
            }
        }

        // handle the last of the array 
        if(count == 1){
            chars[writing++] = current;
        }
        else {
            chars[writing++] = current;
            string s = to_string(count);
                for(char ch : s)
                chars[writing++] = ch;
                count = 0;
                current = chars[reading];
        }
        return writing;
    }
};