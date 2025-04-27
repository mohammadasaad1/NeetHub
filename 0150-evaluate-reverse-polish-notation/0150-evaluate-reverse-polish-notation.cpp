class Solution {
public:

    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        stack<int> rev;
        for (int i = 0; i < n; i++) {
            if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" &&
                tokens[i] != "/") {
                int num = stoi(tokens[i]);
                rev.push(num);
            } else {
                int n1 = rev.top();
                rev.pop();
                int n2 = rev.top(); 
                rev.pop();
                char s = tokens[i][0];

                switch(s){
                    case '*' :   rev.push(n1 * n2); break ; 
                    case '/' :   rev.push((int)((double)n2 / n1));  break ; 
                    case '+' :   rev.push(n1 + n2); break ; 
                    case '-' :   rev.push(n2 - n1); break ; 
                }
            }
        }
        return rev.top();
    }
};