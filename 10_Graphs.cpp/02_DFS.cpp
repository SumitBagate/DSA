#include<iostream>
#include<vector>

using namespace std;

// void  DFS(int node,vector<vector<int>>&adj, vector<bool>visited){

//     visited[node]=true;
//     cout<<node<<  " ";

//     for(int  neighbour: adj[node]){
//          if(!visited[neighbour])
//          {
//             DFS(neighbour,adj,visited);
//          }
//     }


  
// };


// int main()
// { 
//   int V = 5;
//   vector<vector<int>>adj(V);
//   //adding  edges
//   adj[0].push_back(1);
//   adj[0].push_back(2);
//   adj[1].push_back(3);
//   adj[2].push_back(4);

//   vector<bool> visited(V,false);
//   DFS(0,adj,visited);

  
  
// return 0;
// }



// void DFS(int nod, vector<vector<int>>&n,vector<bool>&visited )
// {

//   visited[nod]=true;
//     cout<<nod<<  " ";
   
//   for(int neigbour:n[nod]){
           
//     if(!visited[neigbour]){
//       DFS(neigbour, n, visited);
//     }
//   }

// }






// int main(){
//   int n =5;
//   vector<vector<int>> adj(n);
  
//   adj[0].push_back(1);
//   adj[0].push_back(2);
//   adj[1].push_back(3);
//   adj[2].push_back(4);
// vector<bool> visited(n, false);
//   DFS(0,adj,visited);
// return 0;

// }





void DFS (int node,vector<vector<int>>&num, vector<bool>&visited)

{
  visited[node]=true;

  cout<<node<<" ";
  for(int neighbour:num[node])
  {
    if(!visited[neighbour])
    {
     DFS ( neighbour,num, visited);
    }
  }
}

int main()
{
  int n =5;
  vector<vector<int>> num(n);
  vector<bool>visited(n,false);

  num[0].push_back(1);
  num[0].push_back(2);
  num[1].push_back(3);
  num[2].push_back(4);
  
  DFS(0,num,visited);
  return 0;

}
















// #include <bits/stdc++.h>
// using namespace std;

// vector<int> adj[100];
// int visited[100];

// void dfs(int v)
// {
//     cout << v << " ";
//     visited[v] = 1;
//     for (int i = 0; i < adj[v].size(); i++)
//     {
//         int child = adj[v][i];
//         if (visited[child] == 0)
//         {
//             dfs(child);
//         }
//     }
// }

// int main()
// {
//     int ver, edg;
//     cout << "enter vertices and edges ( v , e)" << endl;
//     cin >> ver >> edg;

//     for (int i = 0; i < edg; i++)
//     {
//         int u, v;
//         cout<<"ENTER STARTING  AND ENDING  VERTEX "<<endl;5
//         cin >> u >> v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     dfs(1);
//     return 0;
// }


