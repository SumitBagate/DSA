#include <bits/stdc++.h>
using namespace std;

void DFS(int node, vector<vector<int>> &adj, vector<bool> &visited)
{
  visited[node] = true;
  cout << node << " ";

  for (int neigh : adj[node])
  {
    if (!visited[neigh])
    {
      DFS(neigh, adj, visited);
    }
  }

}



int main()
{
  int V, E;
  cout << "Enter V:- ";
  cin >> V;
  cout << "Enter E :-";
  cin >> E;

  vector<vector<int>> adj(V);
  cout << "Enter edges (u v):\n";
  for (int i = 0; i < E; i++)
  {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
  }

  vector<bool> visited(V, false);

  DFS(0, adj, visited);

  return 0;
}