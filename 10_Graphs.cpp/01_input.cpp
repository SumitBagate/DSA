#include<bits/stdc++.h>
using namespace std;


void  DFSRecursive(vector<int> adj[],int s,bool visited[])
{
 visited[s]=true;
 cout<<s<<" ";
 for(int u:adj [s])
 {
    if(visited[u]==false)
        DFSRecursive(adj,u,visited);
    }
}

void DFS(vector<int> adj[],int V , int s)
{
    bool  visited[V];
    for(int i=0;i<V;i++)
    {
        visited[i]=false ;
        DFSRecursive(adj,s)
    }

}



int main()
{ 

    int v=5;
    vector<vector<int>> adj(v);
    vector<vector<int>> edges = 


    
   return 0;
}