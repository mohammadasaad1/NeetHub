class Solution {
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    int ans = 0;
    map<pair<int, int>, bool> vis;
    void dfs(vector<vector<int>>& grid, int i, int j) {
        
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == 0) {
            ans++;
            return;
        }
        if (vis[{i, j}])
            return;

        if(grid[i][j] == 1)
            vis[{i , j}] = 1; 
            
        dfs(grid, i - 1, j);
        dfs(grid, i + 1, j);
        dfs(grid, i, j - 1);
        dfs(grid, i, j + 1);
        

    }

public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int rows = grid.size(), columns = grid[0].size();
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < columns; j++)
                if (grid[i][j] == 1)
                    dfs(grid, i, j);
        return ans;
    }
};