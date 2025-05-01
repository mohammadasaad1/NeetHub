class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size() ;
        vector <int> ans(n, 0);
        stack<int> stk; 
        for(int i = 0 ; i < n ; i++){
            while(!stk.empty() && temperatures [i] > temperatures[stk.top()]){
                int go = stk.top() ; 
                stk.pop() ; 
                ans[go] = i - go;
            }
            stk.push(i);
        }
        return ans;
    }
};