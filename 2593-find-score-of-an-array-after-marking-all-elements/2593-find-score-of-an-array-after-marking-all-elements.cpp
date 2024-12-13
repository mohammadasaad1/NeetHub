class Solution {
public:
    long long findScore(vector<int> &nums) {
       priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
    map<int, bool> vis;
    int n = nums.size();
    long long score = 0;

    for (int i = 0; i < n; i++) {
        pq.push({nums[i], i});
        vis[i] = false;
    }
    while (!pq.empty()) {
        int val = pq.top().first, idx = pq.top().second;
        if (vis[idx])
            pq.pop();
        else {
            score += val;
            int ridx = idx + 1 >= n ? -1 : idx + 1;
            int lidx = idx - 1 < 0 ? -1 : idx - 1;
            vis[ridx] = vis[lidx] = true ;
            pq.pop() ;
        }
    }
    return score;}
};