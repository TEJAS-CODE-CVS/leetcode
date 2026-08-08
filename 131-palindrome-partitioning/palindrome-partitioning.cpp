class Solution {
public:
    
    
    vector<vector<string>> partition(string s) {
        
         vector<vector<string>> ans ;
         vector<string> partition ;


         getthepart( s , ans , partition ) ;

         return ans ;
    }

     void  getthepart(string s ,   vector<vector<string>> &ans ,vector<string> &partition  )
     {
        if(s.size() == 0)
        {
            ans.push_back(partition) ;
            return ;
        }
        for(int i = 0 ; i < s.size() ; i++)
        {
            string part = s.substr(0,i+1) ;
            if(ispalindrome( part ) == true)
            {
                partition.push_back(part);
                getthepart(s.substr(i+1) , ans , partition);
                partition.pop_back();
            }
        }
     }

    bool ispalindrome(string part)
    {
        string s = part ;

        reverse(s.begin() , s.end());

        return part == s ;


    }

};