#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void BFS(int start, vector<vector<int>>& adj, int V)
{
    vector<bool> visited( false);
    queue<int> q;

    visited[start]=true;
    q.push(start); 

    while(!q.empty()){
        
         int  node = q.front();
         q.pop();

         cout<< node << " ";
 
         for(int neighbor: adj[node])
         {
            if(!visited[neighbor])
            {
                visited[neighbor] = true;
                q.push(neighbor);
            }
         }
    }
}


int main()
{  
    int V,E;//vcertices and edges
    cin>>V>>E;

    vector<vector<int>> adj(1);

    for(int i = 0; i < E ; i++){
        int u, v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);// remove for directed  graph
    }
    
    int start;
    cin>>start;
    BFS(start,adj, V);

    return 0;
}