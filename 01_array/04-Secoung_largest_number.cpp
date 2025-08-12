#include<bits/stdc++.h>
using  namespace std;


void bruteForce(vector<int>&nums , int n )
{  sort(nums.begin(),  nums.end());
    int largest= nums[n-1];
    int secoundlarg =nums[0];
  
    cout<<largest<<endl;
    for(int  i =0;i<n;i++)
    {
        if( nums[i]<largest)
        {
           secoundlarg = nums[i];
        }
    }
    cout<<secoundlarg<<endl;
}

void Better()
{
    

}


void optimized(){

}



int main(){
    vector<int> nums = {3, 1, 4, 1, 5} ; 
    int n = nums.size();
    bruteForce(nums, n);
          
      
     

    return 0;
}