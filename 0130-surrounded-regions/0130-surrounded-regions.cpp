class Solution {
public:
    int vis[300][300];
    vector<pair<int, int>> edges;

    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    bool checkIsEdge(int i, int j, int n, int m) {
        return (i == 0 || i == n - 1 || j == 0 || j == m - 1);
    }

    void dfs(vector<vector<char>>& board, int r, int c) {
        vis[r][c] = true;
        int n = board.size(), m = board[0].size();

        for (int step = 0; step < 4; step++) {
            int nr = r + dx[step], nc = c + dy[step];
            if (nr >= 0 && nr < n && nc >= 0 && nc < m &&
                board[nr][nc] == 'O' && !vis[nr][nc])
                dfs(board, nr, nc);
        }
    }

    void solve(vector<vector<char>>& board) {
        int rows = board.size(), cols = board[0].size();
        for (int r = 0; r < rows; r++)
            for (int c = 0; c < cols; c++)
                if(checkIsEdge(r, c, rows, cols) && board[r][c] == 'O')
                 edges.push_back({r, c});

        for (int e = 0; e < edges.size(); e++) {
            if (!vis[edges[e].first][edges[e].second])
               dfs(board, edges[e].first, edges[e].second);
        }

        for (int r = 0; r < rows; r++)
            for (int c = 0; c < cols; c++) {
                if (!vis[r][c] && board[r][c] == 'O')
                    board[r][c] = 'X';
            }
    }
};