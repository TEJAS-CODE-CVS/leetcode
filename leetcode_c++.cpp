// leetcode--------------------------------------->array           


//1.sum two numbers which is eqaul to target
/*brute force method time complexity is n sqr
#include<iostream>
int main()
{
    int nums[] = {2,7,11,15} ;
    int target = 18 ;
    int size = sizeof(nums) / sizeof(nums[0]) ;


    for (int i = 0 ; i < size -1 ; i++ )
        {
          for (int j = i+1 ; j < size ; j++ )
          {
            if (nums[i] + nums[j] == target )
            {
                std::cout << i << j ;
            }
          }
        }  


    
    return 0;
}

*/  
/*two pointers apporach only if array is sorted
#include<iostream>
int main()
{
  int arr[] = {2,3,4,5,8,} ;
  int target = 6 ;
  
  int size = sizeof(arr) / sizeof(arr[0]) ;

  int i = 0 ;
  int j = size -1 ;

  while( i < j )
  {
    
    int sum =  arr[i] + arr[j] ;
    
    if( sum == target )
    {
      std::cout << i << " " << j ;
      break;
    }
  
    else if ( sum > target)
    {
      j--;
    }

    else
    {
      i++;
    }

  }

  return 0;
}
*/


//15.3sum
/*brute

#include<iostream>

int main()
{
  int nums[] = {0,1,1,-1,-1,0 } ;
  int target = 0 ;
  int size = sizeof(nums)/sizeof(nums[0]);
  
  

  for(int i = 0 ; i < size - 2 ; i++)
  {
    for(int j = i + 1 ; j < size - 1 ; j++)
    {
      for(int k = j + 1 ; k < size ; k++)
      {
        if (nums[i] + nums[j] + nums[k] == target)
        {

          std::cout << nums[i] << " " << nums[j] << " " << nums[k] << "\n" ;
        }
      }
    }
  }
  
  return 0;
}
*/
/*two pointers
#include<iostream>
int main()
{
  int nums[] = {-1,-1,-1,0,0,0,1,2,2,3} ;
  int size = sizeof(nums) / sizeof(nums[0]) ;
  int target = 0 ;
  
  int i = 0;

  int j = i + 1; 
  int k = size - 1 ;

  for(i = 0 ; i < size  ; i++)
  {
    if( i > 0 && nums[i] == nums[i-1] ) continue ;
    
    while(j < k)
    {

      int sum = nums[i] + nums[j] + nums[k] ;
      if(sum == target )
      {
        std::cout << nums[i] << " " << nums[j] << " " << nums[k] << "\n" ;
        while( j < k && nums[j] == nums[j + 1]) j++;
        while(j < k && nums[k] == nums[k-1]) k--;
        j++;
        k--;
      }
  
      else if(sum > target)
      {
        k--;
      }
  
      else
      {
        j++;
      }
    
  
    }

  }

  
  return 0;
}
*/

//17. 4sum
/* brute force
#include<iostream>
int main()
{
  int nums[] =  {-2,-1,0,1,2,3};
  int size = sizeof(nums)/sizeof(nums[0]);
  int target = 0;

  int i = 0;
  int j = i+1;
  int l = j + 1 ;
  int k = l + 1;
  


  for(i = 0 ; i < size - 3 ; i++)
  {
    for(j = i + 1 ; j < size - 2 ; j++)
    {
      for(l = j + 1 ; l < size - 1 ; l++ )
      {
        for(k = l + 1 ; k < size ; k++)
        {
          
          int sum = nums[i] + nums[j] + nums[l] + nums[k];
          
          if(sum == target)
          {
            std::cout << nums[i] << " " << nums[j] << " " << nums[l] << " " << nums[k] << "\n";
          }
                  
        }
      }
    }
  } 
  
  return 0;
}
*/
/* two pointers 
#include<iostream>
int main()
{
  int nums[] = {-2,-1,0,0,1,2}; 
  int size = sizeof(nums)/sizeof(nums[0]);
  int target = 0 ;
  
  int i = 0;
  int j = i+1 ;



  for(i = 0 ; i < size - 3 ; i++)
  {
   
    if(i > 0 && nums[i]==nums[i-1]) continue;

    for(j = i + 1 ; j < size - 2 ; j++)
    
    { 
      
      if(j > i+1 && nums[j]==nums[j-1]) continue;
      
      int l = j+1;
       int k = size -1 ;
    
    while(l < k)
    {
      
      

      int sum = nums[i] + nums[j] + nums[l] + nums[k];
      
      if( sum == target)
      {
       
        std::cout << nums[i] << " " << nums[j] << " " << nums[l] << " " << nums[k] << "\n" ;
        while(l < k && nums[l]==nums[l+1]) l++;
        while(l < k && nums[k]==nums[k-1]) k--; 
        l++;
        k--;

      }
    
      else if(sum > target)
      {
        k--;
      
      }
    
      else
      {

        l++;
      }



    }



   }
  
  }  
  
  return 0;

}
*/

// 26.remove duplicate elements
/* two pointers approach
#include<iostream>
int main()
{
  int nums[] = {0,0,1,1,2,2,3,3,4,4} ;
  int size = sizeof(nums)/sizeof(nums[0]);

  int i = 0 ;
  int j = 1 ;

  for(j = 1 ; j < size ; j++)
  {
    if(nums[i] != nums[j])
    {
      i++;
      nums[i] = nums[j];
    }
  }
  
  for(int k = 0 ; k <= i ; k++)
  {
    std::cout << k ;
  }
  
  return 0;
}
*/
/* using brute force
#include<iostream>
int main()
{
  int num1[] = {1,2,2,2,3,3,4,4,4,5,5} ;
  int size = sizeof(num1)/sizeof(num1[0]); 
  int num2[size] ;
  int i = 0 ;
  
  num2[i] = num1[0] ;
   
  
  for( int j = 1; j < size ; j++)
    {
      if (num1[j] != num1[j-1])
      {
        i++;
        num2[i] = num1[j];
        
      }
    }
  
  for (int k = 0 ; k <= i ; k++)
  {
    std::cout << num2[k] ;
  }
  
  return 0;
}
*/


// 80.remove duplicate II
/*two pointers 
#include<iostream>
int main()
{
  int nums[] = {1,1,1,2,2,2,3,3,3,4,4,5,5};
  int size = sizeof(nums)/sizeof(nums[0]);
  int i = 2 ;


  for(int j = 2 ; j < size ; j++)
  {
    if(nums[j] != nums[ i - 2 ])
    {
     nums[i] = nums[j] ;
     i++;
    }
  
  }
  
  
  for(int k = 0 ; k < i ; k++)
  {
    std::cout << nums[k] ;
  }
  
  return 0;
}
*/
//brute force 


//27. remove element
/*two pointer
#include<iostream>
int main()
{
  int nums[] = {0,1,2,2,3,0,4,2};
  int size = sizeof(nums)/sizeof(nums[0]);
  int val = 2 ;
  int i = 0 ;
  

  for(int j = 0 ; j < size ; j++)
  {
    if(nums[j] != val )
    {
      
      
      nums[i] = nums[j];
      i++;
    }
  
    
  }
  
  
  for(int k = 0 ; k <= i ; k++)
  { 
    std::cout << nums[k];
  }
  
  
  return 0;
}
*/


//283. move zeros
/* two pointers
#include<iostream>
int main()
{
  int nums[] = {0,1,0,3,12};
  int size = sizeof(nums)/sizeof(nums[0]);
  int i=0;
  int j=0;

  for( j = 0 ; j < size ; j++)
  {
    if( nums[j] != 0)
    {
      int temp = nums[i];
      nums[i] = nums[j];
      nums[j] = temp ;
      i++;
    }
  }
  
  
  for(int k = 0 ; k < i ; k++ )
  {
    std::cout << nums[k];
  }
  
  
  
  
  return 0;
}
*/


//209.Minimum Size Subarray Sum
/*Brute force approch 
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int size = nums.size();
        
        int MIN = INT_MAX ;

        for(int i = 0 ; i < size ; i++)
        {
           
           int sum = 0 ;
           
            for(int j = i ; j < size  ; j++)
            {
            
                 sum += nums[j] ;

                if( sum >= target)
                {
                   int length = j - i + 1 ;
                   MIN = min(length,MIN);
                   break;
                }
            
            }
        
         
            if( MIN == INT_MAX)
            {
                return 0;
            }

        
        }
    return MIN;

    }
};

*/


//1004. Max consecutive ones III
/*brute
#include<iostream>
#include<algorithm>
int main()
{
  int nums[] = {1,1,1,0,0,0,1,1,1,1,0};
  int size = sizeof(nums)/sizeof(nums[0]);
  int k = 2;
  int i = 0 ;
  int j= 0 ;
  int countzero = 0 ;
  int ans = 0 ;


  for(i = 0 ; i<size ; i++)
  {
    for(j = i ; j < size ; j++)
    {
      if(nums[j] == 0)
      {
        countzero++;
      }
    
      else if(countzero > k)
      {
        ans = std::max(ans,j-i);
        break;
      }
    
    }
  
  }
  
  
  std::cout << ans ;
  
  return 0 ;
}
*/
/*optimized sliding window

#include<iostream>
#include<algorithm>
int main()
{
  int nums[] = {1,1,1,0,0,0,1,1,1,1,0};
  int size = sizeof(nums)/sizeof(nums[0]);
  int k = 2;
  int i = 0 ;
  int j = 0 ;
  int countzero = 0 ;
  int ans = 0 ;

for(j = 0 ; j < size ; j++)
{
  if(nums[j] == 0)
  {
    countzero++;
  }
  
  if(countzero > k)
  {
    if(nums[i] == 0)
    {
      countzero--;  
    }
    i++;
  }
}

 std::cout << size - i;

  return 0;

}
*/

//189.rotate array
/* brute  

int nums[] = {1,2,3,4,5,6,7};
    int size = sizeof(nums)/sizeof(nums[0]);
        int i = 0;
        int k = 3 ; 


for(int j = 0 ; j < k ; j++)
        {
        
        int temp = nums[size - 1];
        
        for( i = size - 2 ; i >= 0  ; i--)
        {

            
            nums[i+1] = nums[i] ;
            
        
        }
        
        nums[0] = temp;
       
    }
   
     
     for(int k = 0 ; k < size ; k++)
        std::cout << nums[k];
    
    
    
    
    return 0 ;
}



*/
/* better
#include<iostream>
int main()
{
  int nums[] = {1,2,3,4,5,6,7};
  int size = sizeof(nums)/sizeof(nums[0]);
  int k = 3 ;
  int arr[k];
  
  k =  k % size ; 

  for(int i = 0 ; i < k ; i++)
  {
    arr[i] = nums[size - k + i];
  }
    
  for(int i = size - 1 ; i >= k ; i--)
  {
    nums[i] = nums[i-k];
  }
  
  for(int i = 0 ; i < k ; i++ )
  {
    nums[i] = arr[i];
  }
  
  std::cout << "\n\nthe rotated array:\n\n";

  for(int i = 0 ; i < size ; i++)
   {
    std::cout << nums[i];
  }


  return 0 ;
}

*/
/* optimal solution
#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
  std::vector<int> nums = {1,2,3,4,5,6,7};
  int size = sizeof(nums)/sizeof(nums[0]);
  int k = 3;

  k =  k % size ;        
    
    reverse(nums.begin() , nums.end());
    reverse(nums.begin()  , nums.begin() + k);
    reverse(nums.begin() + k , nums.end() );
    
  
  for(int i = 0 ; i < size ; i++)
  {
    std::cout << nums[i] ;
  }
    
  
  return 0;
}
*/





































