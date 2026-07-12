class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int size = nums.size();
        int i = 0 ;
        int j = i;
        int count = 0 ;

        while(i < size)
        {
        
          
          int sum = 0;
          
          for(j = i ; j < size ; j ++)
          {
            
            sum += nums[j];
            
            if(sum == k)
            {
                count++;
            }
          
          }
          
        i++;
        
        } 

    return count;
        
    }
};