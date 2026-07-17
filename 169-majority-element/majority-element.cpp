class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int ,int> mpp;

        for(int i = 0 ; i < nums.size() ; i++)
        {
            mpp[nums[i]]++;
        }

        int max = 0 ;
        int ans ;

        for(auto it : mpp)
        {
            if(max < it.second)
            {
                max = it.second;
                ans = it.first ;
            }
        }

    return ans;
    }
};