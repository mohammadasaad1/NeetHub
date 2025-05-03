class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {

        int dx[4] = {1, -1, 0, 0};
        int dy[4] = {0, 0, -1, 1};
        //           r    l    d  u
        int ans = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1) {
                    ans += 4;
                    for (int k = 0; k < 4; k++) {
                        int ii = i + dx[k], jj = j + dy[k];
                        if (ii >= 0 && ii < grid.size() && jj >= 0 && jj < grid[0].size() &&
                            grid[ii][jj] == 1)
                            ans--;
                    }
                }
            }
        }
        return ans;
    }
};