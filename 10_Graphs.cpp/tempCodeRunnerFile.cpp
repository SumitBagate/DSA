#include<`bits/stdc++.h>
using namespace std;

//khan's algorithm is a method for topological sorting of a directed acyclic graph (DAG). 
//It works by repeatedly removing nodes with no incoming edges and adding them to the topological order until all nodes have been processed. 
//Here's an implementation of Kahn's algorithm in C++:

int khansAlgo(int v, vector<vector<int>>& adj) {
    vector<int> inDegree(v, 0);
    for (int i = 0; i < v; i++) {
        for (int nei : adj[i]) {
            inDegree[nei]++;
        }
    }

    queue<int> q;
    for (int i = 0; i < v; i++) {
        if (inDegree[i] == 0) {
            q.push(i);
        }
    }

    vector<int> topoOrder;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        topoOrder.push_back(node);

        for (int nei : adj[node]) {
            inDegree[nei]--;
            if (inDegree[nei] == 0) {
                q.push(nei);
            }
        }
    }

    if (topoOrder.size() != v) {
        cout << "The graph has a cycle, topological sorting is not possible." << endl;
        return -1; // Return -1 to indicate a cycle
    }

    cout << "Topological Order: ";
    for (int node : topoOrder) {
        cout << node << " ";
    }
    cout << endl;

    return 0; // Return 0 to indicate success
}





int main()
{
 int v,e;
 cin>>v>>e;

 vector<vector<int>> adj(v);


 for(int i =0 ; i< e ;i++)
 {
    int u , v;
    cin>>u>>v;
 }





return 0;}
// Hardcoded directed graph
// Vertices: 0, 1, 2, 3, 4, 5
// Edges: 5->2, 5->0, 4->0, 4->1, 2->3, 3->1
v = 6;
adj.assign(v, vector<int>());

adj[5].push_back(2);
adj[5].push_back(0);
adj[4].push_back(0);
adj[4].push_back(1);
adj[2].push_back(3);
adj[3].push_back(1);

khansAlgo(v, adj);