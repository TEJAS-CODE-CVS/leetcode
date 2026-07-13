#include <vector>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int size = nums.size();
        int i = 0 ;
        int j = 1 ;

       for(i = 0 ; i < size - 1; i++)
       {
        for(j = i+ 1 ; j < size  ; j++)
        {
            int sum = nums[i] + nums[j];
            
            if(sum == target)
            {
                return {i , j};
            }
        }
       
       }
        
    
        return {};
    }
};