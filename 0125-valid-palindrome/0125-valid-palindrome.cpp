class Solution {
public:
    bool isPalindrome(string s) {
    string t = "" ;
    for(auto i : s)
    {
        char c = tolower(i) ;
        if(c >= 'a' && c <= 'z' || c >= '0' && c <= '9')
            t.push_back(c) ;
    }
        if (t == "")
            return true ; 
    int n = (int)t.size() ;
    for(int i = 0 ; i <= n / 2 ; i++)
        if(t[i] != t[n - i - 1])
            return false ;

    return true ;
}
};