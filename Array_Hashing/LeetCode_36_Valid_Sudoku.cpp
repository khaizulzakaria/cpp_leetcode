class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        std::map<int, std::set<char>> row;
        std::map<int, std::set<char>> col;
        std::map<std::pair<int,int>, std::set<char>> square;
        
        for (int r =0 ; r < 9; ++r)
        {
            for (int c =0 ; c < 9; ++c)
            {
              if (board[r][c] == '.')
                  continue;

              if (!row[r].insert(board[r][c]).second || !col[c].insert(board[r][c]).second || !square[std::make_pair(r/3, c/3)].insert(board[r][c]).second)
                    return false;  
            }
                
        }
        return true;                       
    }
};