class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        
        
        int maxi = INT_MIN ;
        int i = 0 ;
        unordered_map<int ,int> mp ;

        
        
        for(int j = 0 ; j < nums.size() ; j++)
        {
          mp[nums[j]]++ ;

          while(mp[nums[j]] > k)
          {
            mp[nums[i++]]-- ;
                    
          }
          
          maxi = max(maxi , j-i +1) ;
        
        }

    return maxi ;
        
    }
};