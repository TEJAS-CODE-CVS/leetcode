class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> ans ;

         ss( nums ,ans , ds , 0  );

        return ans;

        
    }

    void ss(vector<int>& nums ,vector<vector<int>>& ans, vector<int>& ds , int i  )
    {
       if( i >= nums.size())
       {
         ans.push_back(ds);
         return;
       }
        
      
       ds.push_back(nums[i]);
       ss(nums ,ans ,ds , i + 1);
       ds.pop_back();
       ss(nums , ans,ds , i + 1);




    

    }


};