class Solution {
public:
     bool isPair(char o , char e)
    {
        if(o == '(' && e == ')')
            return true ; 
       
        return false ; 
    }
    bool isValid(string s) {
        stack <char> stk ; 
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] == '{' || s[i] == '[' || s[i] == '(')
                stk.push(s[i]) ; 
            else if(s[i] == '}' || s[i] == ']' || s[i] == ')')
            {
                if(stk.empty() || !isPair(stk.top() , s[i]))
                    return false ; 
                else stk.pop() ; 
            }
                
        }
        return stk.empty() ; 
        
    }
    vector <string> ret;
    void pos(string t , int &n){
        if(t.size() == 2*n + 1)
        return; 

        
        pos(t + "(" , n) ; 
        pos(t + ")" , n) ; 

        if(isValid(t) && t.size() == 2 * n) ret.push_back(t) ;

    }
    vector<string> generateParenthesis(int n) {
        
        cout << n;
        pos("" , n);
        return ret ; 
    }
};