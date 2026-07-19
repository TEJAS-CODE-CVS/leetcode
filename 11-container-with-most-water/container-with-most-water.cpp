class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int size = height.size();

        int maximum = 0 ;
        int i = 0 ;
        int j = size - 1 ;
        

        while( i < j )
        {
           
            
           int h = min(height[i] , height[j]);
           int width = j - i ;
           int area = h*width;
           maximum = max(maximum , area) ;

           if( height[j] >= height[i])
           {
             i++;
           } 

        
           else
           {
            j--;
           }        
        
        }
        
    return  maximum ;
    
    } 
};