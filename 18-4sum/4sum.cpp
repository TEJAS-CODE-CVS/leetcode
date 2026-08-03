using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>> result ;
        sort(nums.begin(), nums.end());
        
        int size = nums.size();


        int i = 0;
        int j = i+1;
        int k = j+1;
        int l = size -1;


        for(i = 0 ; i < size -3 ; i++)
        {
          if(i > 0 && nums[i] == nums[i-1]) continue ;

          for(j = i+1 ; j< size - 2 ; j++)
          {
          
            if(j > i+1 && nums[j] == nums[j-1]) continue ;

          int k = j + 1;
          int l = size -1;
        
           while(k < l)
        {
          
          long long sum = (long long) nums[i] + nums[j] + nums[k] + nums[l] ;
          if(sum == target)
          {
            result.push_back({nums[i] , nums[j] , nums[k] , nums[l]}) ;
            
            k++;
            l--;
            
            while(k < l && nums[k]==nums[k-1]) k++;
            while(k < l && nums[l]==nums[l+1]) l--;   
            
          }
        
          else if(sum > target)
          {
            l--;
          }
        
        
          else
          {
    
            k++;
          }

        
        }
         
         
          }
        
        }
    
      
      return result ;



    }



};