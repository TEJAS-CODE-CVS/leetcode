class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        int size = nums.size();
        int i = 0;
        deque<int> dq ;
        vector<int> ans ;

        for( i = 0 ; i < size ; i++)
        {

           while(!dq.empty() && dq.front() <= i - k )
           {
                 dq.pop_front();
           }
           
           while(!dq.empty() && nums[dq.back()] < nums[i])
           {
                dq.pop_back();
           }
           
           dq.push_back(i);

           if(i >= k - 1)
           {
            ans.push_back(nums[dq.front()]);
           }
        

        }    

    
    return ans;
    
    
    }
};