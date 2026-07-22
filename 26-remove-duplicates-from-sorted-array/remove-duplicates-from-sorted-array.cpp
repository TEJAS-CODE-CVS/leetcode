#include<vector>

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int size = nums.size();
        int i = 0 ;
        int j = 0 ;


       for( j = 0 ; j < size ; j++)
       {
        
           if(nums[j] != nums[i] )
           {i++;
           nums[i] = nums[j];
       
           }
       }
    
    
    
      return i + 1;
    
    }

    

};


