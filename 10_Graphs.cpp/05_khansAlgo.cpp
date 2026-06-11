#include <bits/stdc++.h>
using namespace std;


vector<int>  topoSort(int V, vector<vector<int>>&adj)
{
    vector<int>indegree(V,0);
    for(int i =0;i<V;i++)
    {
        for(int v: adj[i])
        {
            indegree[v]++;
        }
        
    }
    
    queue<int>q;
        for(int i =0 ; i < V; i++)
    {
        if ( indegree[i]== 0)
        {
            q.push(i);
        }
    }
    
    vector<int> topoOrder;

    while (!q.empty())
    {
       int u = q.front();
       q.pop();
       topoOrder.push_back(u);
       

       for(int v:adj[u])
       {
         indegree[v]--;
         if(indegree[v] == 0)
         {
            q.push(v);
         }
       }

    }
    
 
 
 
    return   topoOrder;


}




int main()
{
    int V, E;
    cout<<"enter V";
    cin>>V;
    cout<<"Enter E";
    cin>>E;
    
    vector<vector<int>> adj(V);

    for(int i =0;i<V;i++)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
    }


    vector<int> ans =topoSort(V,adj);
    
    cout<<"toposort";
    for (int n:ans)
    {

      cout<<n << " ";
    }


    
    return 0;
}