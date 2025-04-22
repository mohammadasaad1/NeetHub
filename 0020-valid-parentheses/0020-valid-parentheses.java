import java.util.Stack;
class Solution {
    private boolean isClosing(Character ch){
       return (ch == ')' || ch == '}' || ch == ']');
    }
    private Character pts(Character ch){
        if(ch == ')')
        return '(';
        if(ch == '}')
        return '{';
        if(ch == ']')
        return '[';
        return null;
    }
    public boolean isValid(String s) {
            Stack<Character>stk = new Stack<Character>();
        int n = s.length();
        for(int i = 0 ; i < n; i++)
        {
            if(!stk.empty() && isClosing(s.charAt(i))){

                if(stk.peek() == pts(s.charAt(i)))
                    stk.pop();
                else return false;
            }
            else{
                stk.push(s.charAt(i));
            }
        }
        return stk.empty();
    }
}