#include <bits/stdc++.h>
using namespace std;
int main()
{   int n;
    cin>>n;
    int arr[n];
    bool visit[n] ={false};

    for(int i = 0; i<n;i++)
    {
        cin>>arr[i];

    }
    
    cout<<"frequency :\n";



    for(int i = 0;i<n;i++)
    {    
        int count =0;
    
       if(visit[i]) continue;
      
        for(int j=0;j<n;j++)
        {
            if(arr[i]== arr[j])
            {
              count++;
              visit [j]=true;
            }
        }
   cout<<arr[i]<<"-> "<<count<<endl;
      visit[i] = true;  
}




    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}
