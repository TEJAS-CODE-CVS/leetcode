class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
         return atmost(nums, k) - atmost(nums, k - 1);
         
        
        }
   
    int atmost(vector<int>& nums, int k)
    {
        int size = nums.size();
        map<int,int> mp;
        int count = 0 ;
        int j = 0 ;

        for(int i = 0 ; i < size ; i++)
        {
           mp[nums[i]]++;

           while(mp.size() > k)
           {
              mp[nums[j]]--;
              if(mp[nums[j]] == 0)
              {
                mp.erase(nums[j]) ;
              }
              
              j++;
           
           }

           count += i - j + 1 ;

        }
    
     return count ;
    
    }    
   
   
   
   
    };
