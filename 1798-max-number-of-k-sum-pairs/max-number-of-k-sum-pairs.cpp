using namespace std;

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        int i = 0 ;
        int j = size -1 ;
        int count = 0;

        while( i < j)
        {
           
                   
            int sum = nums[i] + nums[j];
            
    
            if( sum == k )
            {
                count +=1;
                i++;
                j--;
                
            }
            
           
           else if(sum > k)
           {
             j--;
           }
           
            else
            {
                i++;
            }
            
          
          
        
        }
        
        return count ; 
    
    
    }
};