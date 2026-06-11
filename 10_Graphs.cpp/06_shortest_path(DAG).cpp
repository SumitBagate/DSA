#include<bits/stdc++.h>
using namespace std;

void  shortest_path()
{

   




}


int main()
{
    int  V,E;
    cout << "Enter V:- ";
    cin >> V;
    cout << "Enter E :-";   
    cin >> E;

    vector<vector<int>> adj(V);
     
    for( int i = 0; i < E; i++)
    { int u, v;
      cin >> u >> v;
      adj[u].push_back(v);
    }

    shortest_path();
 
  return 0;
}