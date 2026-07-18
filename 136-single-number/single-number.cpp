class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        map<int , int> mpp;
        int size = nums.size();

        for(int i = 0 ; i < size ; i++)
        {
            mpp[nums[i]]++ ;
        }
    
        for( auto it : mpp)
        {
            if(it.second == 1)
            {
                return it.first ;
            }
        }
        

    return {};

    }
};