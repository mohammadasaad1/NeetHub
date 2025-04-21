class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> checkRow[9], checkCol[9], checkBox[9];
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char val = board[i][j];

                if (val == '.')
                    continue;

                int ibox = (i / 3) * 3 + j / 3;
                if (checkRow[i].count(val) || checkCol[j].count(val) ||
                    checkBox[ibox].count(val)) {
                    return false;
                }
                checkRow[i].insert(val);
                checkBox[ibox].insert(val);
                checkCol[j].insert(val);
            }
        }
        return true;
    }
};