
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        int size = nums.size();

        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        int target = 0;

        for (int i = 0; i < size; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int j = i + 1;
            int k = size - 1;

            while (j < k) {

                int sum = nums[i] + nums[j] + nums[k];
                if (sum == target) {

                    result.push_back({nums[i], nums[j], nums[k]});
                    while (j < k && nums[j] == nums[j +1])
                        j++;
                    while (j < k && nums[k] == nums[k -1 ])
                        k--;
                    j++;
                    k--;
                }

                else if (sum > target) {
                    k--;
                }

                else {
                    j++;
                }
            }
        }

        return result;
    }
};