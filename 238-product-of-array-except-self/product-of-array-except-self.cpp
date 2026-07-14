class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        
        vector<int> prefix(size);
        vector<int> suffix(size) ;

        
        prefix[0] = 1 ;
        
        for(int i = 1 ; i < size ; i++)
        {   
           prefix[i] = prefix[i-1] * nums[i-1];   
        }
        
          
           int suffixproduct = 1 ;

        
        for(int i = size - 1 ; i >= 0 ; i--)
        {
            prefix[i] = prefix[i] * suffixproduct ;
            suffixproduct = nums[i] * suffixproduct ;
        }

        


        


    return prefix ;


    }
};