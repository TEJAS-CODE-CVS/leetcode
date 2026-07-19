class Solution {
public:
    int maxArea(vector<int>& height) {

        int size = height.size();

        int maximum = 0;
        int i = 0;
        int j = size - 1;

        while (i < j) {
                        
            maximum = max(maximum,  min(height[i], height[j])*(j - i));

            if (height[j] >= height[i]) {
                i++;
            }

            else {
                j--;
            }
        }

        return maximum;
    }
};