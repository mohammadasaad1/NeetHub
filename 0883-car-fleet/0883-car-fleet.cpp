class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, int>> comp(n);

        for (int i = 0; i < n; i++)
            comp[i] = {position[i], speed[i]};

        sort(comp.rbegin(), comp.rend());

        stack<double> stk;

        for (int i = 0; i < n; i++) {
            float time = (float)((target - comp[i].first) / (float)comp[i].second);
            stk.push(time);
            if(stk.size() >= 2){
                float t = stk.top() ; 
                stk.pop();
                if(t > stk.top()){
                    stk.push(t);
                }
            }
        }
        
        return stk.size();
    }
};