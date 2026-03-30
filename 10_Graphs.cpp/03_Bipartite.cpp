#include<iostream>
#include<vector>
#include<bits/stdc++.h>


using namespace std;

//!fill the  node  with  yellow  and  


bool dfs(int node,int c, vector<int>& color , vector<vector<int>>& adj){
   
    color[node] = c;

    for( int nei :adj[node])
    {
        if(color[nei] == -1)
        {
            if(!dfs(nei,1-c,color, adj))
            return  false;
        } 
        else if(color[nei] == c)
        {
            return false;
        }
   }
    
  return true;


}


bool isBipartite(int v, vector<vector<int>>& adj){
 
    vector<int>   color(v,-1);
    for(int i = 0 ;i< v ;i++)
    {
      if(color[i] == -1)
      {
        if (!dfs(i,0,color,adj))
         return  false;
      }
    }

}


int main()
{ 
  int V, E;
  cin>>V;
  cin>>E;
  vector<vector<int>> adj(V);
  
  for(int i =0 ; i< E ;i++)
  {
    int u , v;
    cin>>u>>v;

    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  if (isBipartite(V,adj))
    cout<<" Graph is  Bipertite"<<endl;
  else
    cout<<"Graph  is not  Bipertite"<<endl;

return 0;
}