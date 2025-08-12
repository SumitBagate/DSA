#include<bits/stdc++.h>

//Largest element 

// Brute  Force first  sort and  give last n-1  index

//optimized solution 

{
         
         int Largest =nums[0];
         for(int  i =1 ;i< nums.size() ;i++)
         {
            if(nums[i]>Largest)
            {
                Largest=nums[i];
            }
         }
         return Largest;
      
    }
};