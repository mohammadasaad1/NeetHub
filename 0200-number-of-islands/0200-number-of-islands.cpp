class Solution {
public:
    const int N = 301;
    map <pair <int , int> , vector <pair<int , int>>> adj;
    bool vis[302][302]{};

    int dx[4] = {1 , -1 , 0 , 0};
    int dy[4] = {0 , 0 , -1 , 1};

    void dfs(vector<vector<char>>& grid , int i , int j){
        vis[i][j] = 1 ; 
        cout << i << ' ' << j << '\n' ; 
        for(auto ch : adj[{i , j}]){

            if(!vis[ch.first][ch.second])
                dfs(grid , ch.first , ch.second);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0 ; 
        int n = grid.size() , m = grid[0].size();
        for(int i = 0 ; i < n ; i++){
            for(int j  = 0 ; j < m ; j++){
                if(grid[i][j] == '1')
                for(int k = 0 ; k < 4 ; k++){
                    int ii = i + dx[k] , jj = j + dy[k];
                        if(ii >= 0 && ii < n && jj >= 0 && jj < m){
                                adj[{i , j}].push_back({ii , jj});
                                // adj[{ii , jj}].push_back({i , j});
                        }
                }
            }
        }

        for(int i = 0 ; i < n ; i++){
            for(int j  = 0 ; j < m ; j++){
                 if(!vis[i][j] && grid[i][j] == '1'){
                    dfs(grid , i , j);
                    cout << "\n________________________________\n"; 
                    ans++ ; 
                }
            }
        }
        return ans; 
    }
               
};