class Solution {
 

    public boolean isValid(String s) {
       Stack <Character> stk = new Stack <Character>() ; 
        int n = s.length() ; 
        for(int i = 0 ; i < n ; i++){
            if(s.charAt(i) == '(')
                stk.push(')') ; 
            
           else if(s.charAt(i) == '[')
                stk.push(']') ; 
            
           else if(s.charAt(i) == '{')
                stk.push('}') ; 
            
            else if (stk.empty() || stk.pop() != s.charAt(i)){
                return false ; 
            }
        }
        return stk.empty() ; 
    }
}