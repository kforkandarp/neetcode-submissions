class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        if (!checkRows(board)) return false;

        if (!checkCols(board)) return false;

        if (!checkBoxes(board)) return false;

        return true;
    }
    bool checkRows(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            unordered_set<char> checkR;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;

                if (checkR.find(board[i][j]) != checkR.end()) return false;

                checkR.insert(board[i][j]);
            }
        }
        return true;
    }

    bool checkCols(vector<vector<char>>& board) {
        for (int j = 0; j < 9; j++) {
            unordered_set<char> checkC;
            for (int i = 0; i < 9; i++) {
                if (board[i][j] == '.') continue;

                if (checkC.find(board[i][j]) != checkC.end()) return false;

                checkC.insert(board[i][j]);
            }
        }
        return true;
    }

    bool checkBoxes(vector<vector<char>>& board) {
        for (int startRow = 0; startRow < 9; startRow += 3) {
            for (int startCol = 0; startCol < 9; startCol += 3) {
                unordered_set<char> checkB;

                for (int i = startRow; i < startRow + 3; i++) {
                    for (int j = startCol; j < startCol + 3; j++) {
                        if (board[i][j] == '.') continue;

                        if (checkB.find(board[i][j]) != checkB.end()) return false;

                        checkB.insert(board[i][j]);
                    }
                }
            }
        }
        return true;
    }
};
