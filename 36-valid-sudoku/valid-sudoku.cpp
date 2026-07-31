class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        int row[9][9] = {0};
        int col[9][9] = {0};
        int box[9][9] = {0};
        

        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board.size(); j++) {
                if (board[i][j] == '.') {
                    continue ;
                }
                
                int number = board[i][j] - '0';
                int k = i / 3 * 3 + j / 3;

                if (row[i][number - 1]++ || col[j][number - 1]++ ||
                    box[k][number - 1]++) {
                    return false;
                }
            }
        }

        return true;
    }
};