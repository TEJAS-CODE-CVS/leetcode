class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int size = nums.size();
        int i = 0 ;
        map<int,int> map;
        map[0] = 1;
        
        int prefix = 0 ;
        int count = 0 ;
        

        for(i = 0 ; i < size ; i++)
        {        
          prefix += nums[i];
        
          int neededprefix = prefix - k; 
          count += map[neededprefix];
          map[prefix] += 1 ;
        
        } 

    return count;
        
    }
};