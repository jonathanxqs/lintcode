class Solution {
public:
    /**
      * @param board: the board
      * @return: wether the Sudoku is valid
      */
    
    bool isValidSudoku(const vector<vector<char>>& board) {
        bool used[9];
        for (int i = 0; i < 9; ++i) {
            fill(used, used + 9, false);
            for (int j = 0; j < 9; ++j) // Check the row
                if (!check(board[i][j], used))
                    return false;
            fill(used, used + 9, false);
            for (int j = 0; j < 9; ++j) // check one column
                if (!check(board[j][i], used))
                    return false;
        }
        for (int r = 0; r < 3; ++r) // check the sub 3x3 matix
            for (int c = 0; c < 3; ++c) {
                fill(used, used + 9, false);
                for (int i = r * 3; i < r * 3 + 3; ++i)
                    for (int j = c * 3; j < c * 3 + 3; ++j)
                        if (!check(board[i][j], used))
                            return false;
            }
        return true;
    }
    bool check(char ch, bool used[9]) {
        if (ch == '.') return true;
        if (used[ch - '1']) return false;
        return used[ch - '1'] = true;
    }
};