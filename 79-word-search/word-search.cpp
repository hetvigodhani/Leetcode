class Solution {
public:
    
    int m,n;
    bool backtrack(vector<vector<char>>& board,int i,int j,int rdx,string word)
    {
        // word matches and its comes to end
        if(rdx==word.length())
            return true;
        
        // out of bound
        if(i<0 || j<0 || i>=m || j>=n || board[i][j]=='$' || board[i][j]!=word[rdx])
            return false;
        
        // store the value of current char and marked as visited
        char temp=board[i][j];
        board[i][j]='@';

        // current char is matched now go to next adj. down, left, right, up
        if(backtrack(board,i+1,j,rdx+1,word) || backtrack(board,i-1,j,rdx+1,word) || 
        backtrack(board,i,j+1,rdx+1,word) || backtrack(board,i,j-1,rdx+1,word) ) 
        {
            return true;
        }

        board[i][j]=temp;
        
        // not found
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        m=board.size();
        n=board[0].size();

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]==word[0] && backtrack(board,i,j,0,word))
                {
                    return true;
                }
            }        
        }
        return false;
    }
};