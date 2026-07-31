class Solution {
public:
    int totalNQueens(int n) {
        vector<string> board(n , string(n , '.')) ;
        int count = 0 ;

        nqueens(board ,0 , n , count ) ;

        return count ;

        
    }

    void nqueens( vector<string> &board , int row , int n , int &count )
    {
        if(row == n )
        {
            
            count++;
            return ;
        }
    
    
        for(int i = 0 ; i < n ; i++)
        {
            if( isnqueen(board , row , i , n  ) == true)
            {
                board[row][i] = 'Q' ;
                nqueens(board , row + 1 , n , count);
                board[row][i] = '.' ;
            }
        }
    

    }

  
    bool isnqueen(vector<string> &board , int row , int col , int n )
    {
        //horizontal
        for(int i = 0 ; i < n ; i++)
        {
            if(board[row][i] == 'Q')
            {
                return false ;
            }
        }
        
        //vertical
        for(int i = 0 ; i < n ; i++)
        {
            if(board[i][col] == 'Q')
            {
                return false ;
            }
        }

        //left_daigonal
        for(int i = row , j = col ; i >= 0 && j >= 0 ; i-- , j--)
        {
            if(board[i][j] == 'Q')
            {
                return false ;
            }
        }
    
        //right_daigonal
         for(int i = row , j = col ; i >= 0 && j < n ; i-- , j++)
        {
            if(board[i][j] == 'Q')
            {
                return false ;
            }
        }
    
    
    return true ;
    
    }


};