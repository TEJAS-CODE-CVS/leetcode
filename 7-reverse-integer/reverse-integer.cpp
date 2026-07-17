class Solution {
public:
    int reverse(int n) {

        long rev = 0 ;

        while( n != 0)
        {
            long rem = n % 10 ;

            if( rev > INT_MAX / 10 || rev < INT_MIN / 10) return 0;
           
           
            rev = rev*10 + rem ;
            n = n / 10 ;
        }
        
       return rev;
    }
};