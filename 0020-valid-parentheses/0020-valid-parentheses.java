class Solution {
  public char opp(char x) {
        if (x == '(')
            return ')';
        else if(x == ')')
            return '(' ;

        else if (x == '[')
            return ']';
        else if (x == ']')
            return '[';

        else if (x == '}')
            return '{';
        else
            return '}';
    }

    public boolean isValid(String s) {
        if (s.length() % 2 == 1) // odd
            return false;
        int n = s.length();
        Stack<Character> stk = new Stack<>();

        for (int i = 0; i < n; i++) {
            if (stk.empty()) {
                stk.push(s.charAt(i));
            }
            else {
                char stc = stk.peek() ;
                if(s.charAt(i) == opp(stc) && (stc == '(' || stc == '{' || stc == '[')) {
                    stk.pop();
                }
                else stk.push(s.charAt(i)) ;
            }

        }
        if(stk.empty())
            return true ;
        else return false ;

    }
}