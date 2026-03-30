#include<bits/stdc++.h>
using namespace std;

int  dfs(int node ,int parent ,vector<int> adj[], vector<int>&visited)
{
  visited[node] = 1;
  
  for(auto neighbor : adj[node]){
     if(!visited[neighbor])
     {
      if(dfs(neighbor,node,adj,visited))
      return true ;
     }

     else if (neighbor != parent )
     {
      return true;
     }
  }
   return false;

}


bool isCycle(int V, vector<int>adj[])
{
  vector<int>visited(V,0);

  for (int i =0 ;i<V;i++)
  {
    if(!visited[i])
    {
      if(dfs(i,-1,adj,visited))
         return true;
    }
  }
  return false ;

}


int main ()
{

  int  V,E;
  cout<<"Enter  number of vertices and  edges: ";
  cin>>V>>E;
  
  vector<int> adj[V];

  cout<<"enter  edges (u v):";

  
  for(int i = 0 ; i < E ;i++)
  {
    int u , v;
    cin>>u>>v;

    adj[v].push_back(u);
    adj[u].push_back(v); 
    
  }

  if( isCycle(V,adj))
     
     cout<<"Cycle Detected";

  else 
     cout<<"NO Cycle";
 
    return  0;
}
