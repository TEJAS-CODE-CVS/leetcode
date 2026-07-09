class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        int i = 0;
        k = k % size;
        
        int arr[size];

        for(i = 0 ; i < k ; i++)
        {
            arr[i] = nums[size - k + i];
        }
         
    
        for(int j = size - 1 ; j >= k ; j--)
        {
            nums[j] = nums[j - k];
        }    
    
        for(int l = 0 ; l < k ; l++ )
        {
            nums[l] = arr[l];
        }
    
    }
};