class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; ++i){
            unordered_set<char> s;
            for(int j = 0; j < 9; ++j){
                if(s.find(board[i][j]) != s.end()){
                    return false;
                }
                if(board[i][j] != '.') s.insert(board[i][j]);
            }
        }
        for(int i = 0; i < 9; ++i){
            unordered_set<char> s;
            for(int j = 0; j < 9; ++j){
                if(s.find(board[j][i]) != s.end()){
                    return false;
                }
                if(board[j][i] != '.') s.insert(board[j][i]);
            }
        }

        for(int i = 0; i < 9; i += 3){
            for(int j = 0; j < 9; j +=3){
                unordered_set<char> s;
                for(int a = i; a < i + 3; ++a){
                    for(int b = j; b < j + 3; ++b){
                        if(s.find(board[a][b]) != s.end()){
                            return false;
                        }
                        if(board[a][b] != '.') s.insert(board[a][b]);
                    }
                }
            }
        }

        return true;
    }
};
