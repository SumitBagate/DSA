#include<bits/stdc++.h>
using  namespace std;


void BFS( int  node , vector<vector<int>>&adj ,vector<bool>& visited)
{
    visited[node] =true;
    queue<int> q;
    q.push(node);
      
    while(! q.empty())
    {
       int  node =q.front();
       q.pop();

       cout<< node << " ";

       for(int  neigh: adj[node])
       {
          if(!visited[neigh])
          {
            visited[neigh] = true ;
            q.push(neigh);
          }
       }
    }
}

int main()
{
   int V,E;
   cout << "Enter V:- ";
   cin >> V;
   cout << "Enter E :-";
   cin >> E;

   vector<vector<int>> adj(V);
  cout << "Enter edges (u v):\n";
    for(int i = 0; i < E; i++)
    { int u, v;
      cin >> u >> v;
      adj[u].push_back(v);
    }
   
    vector<bool> visited( V, false);

    BFS(0,adj,visited);




   return  0;
   


}