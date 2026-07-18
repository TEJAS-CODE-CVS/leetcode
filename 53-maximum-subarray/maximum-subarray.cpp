class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size = nums.size();
        int sum = 0;
        int maximum = INT_MIN ;

        for(int j = 0 ; j < size ; j++ )
        {
          
         
           sum += nums[j];
           maximum = max(maximum , sum);
           

           if(sum < 0)
           {
              sum = 0 ;
           }
         
        
       
        }
        
    return maximum ;    
    
    }
};