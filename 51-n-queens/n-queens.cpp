class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
         
        vector<string> boards( n , string( n , '.')) ;
        vector<vector<string>> ans ;
       
        Nqueen( boards , 0 , n , ans);

        return ans ;

        
    }

    void Nqueen(vector<string> &boards, int row , int n ,  vector<vector<string>> &ans  )
    {
        if(row == n)
        { 
            ans.push_back(boards);
            return ;
        }
 
       for(int j = 0 ; j < n ; j++)
       {
        if( isnqueen(boards , row , j ,n  ) == true  )
        {
            boards[row][j] = 'Q' ; 
            Nqueen( boards , row + 1 , n , ans ) ;
            boards[row][j] = '.' ;
        }
    
    
       }
    
    
    }

     
    bool isnqueen(vector<string> &boards, int row , int col ,int n   ) 
    {
        // horizontal
        for(int i = 0 ; i < n ; i++)
        {
            if( boards[row][i] == 'Q')
            {
                return false ;
            }
        }
    
        //vertical
        for(int j = 0 ; j < n ; j++)
        {
            if(boards[j][col] == 'Q')
            {
                return false ;
            }
        }
    
        //left_diagonal
        
        for(int i = row , j = col ; i >= 0 && j >= 0 ; i-- , j--)
        {
              if(boards[i][j] == 'Q')
            {
                return false ;
            }
        }
    
        //right_daigonal
         for(int i = row , j = col ; i >= 0 && j < n ; i-- , j++)
        {
              if(boards[i][j] == 'Q')
            {
                return false ;
            }
        }
    
        return true ;
    
    }

};