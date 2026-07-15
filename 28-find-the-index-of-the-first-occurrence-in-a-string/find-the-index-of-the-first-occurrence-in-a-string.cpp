class Solution {
public:
    int strStr(string haystack, string needle) {
        int needlesize = needle.size();
        int haysize = haystack.size();
        
        int count = 0;

        int i = 0 ;
        

        for( i = 0 ; i <= haysize - needlesize ; i++)
        {
           int j = 0 ;
           while( j < needlesize && haystack[i + j] == needle[j])
           {
            
                j++;;
           } 
           
        
         if( j == needlesize)
         {
            return i;
         }  
        
        
        
        }


    return -1 ;



    }
};