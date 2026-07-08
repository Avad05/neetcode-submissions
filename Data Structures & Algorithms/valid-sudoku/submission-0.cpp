class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> col[9];
        unordered_set<char> row[9];
        unordered_set<char> squares[9];
        
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board.size(); j++){
                int box = (i/3) * 3 + (j/3);
                if(board[i] [j] == '.'){
                    continue;
                }
                if(row[i].find(board[i][j]) != row[i].end() ||
                   col[j].find(board[i][j]) != col[j].end() ||
                   squares[box].find(board [i][j]) != squares[box].end()){
                    return false;
                }else{
                    row[i].insert(board[i][j]);
                    col[j].insert(board[i][j]);
                    squares[box].insert(board[i][j]);
                }
               
            }
             
        }
         return true;
    }
};
