#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100];
int visited[100];

void dfs(int v)
{
    cout << v << " ";
    visited[v] = 1;
    for (int i = 0; i < adj[v].size(); i++)
    {
        int child = adj[v][i];
        if (visited[child] == 0)
        {
            dfs(child);
        }
    }
}

int main()
{
    int ver, edg;
    cout << "enter vertices and edges ( v , e)" << endl;
    cin >> ver >> edg;

    for (int i = 0; i < edg; i++)
    {
        int u, v;
        cout<<"ENTER STARTING  AND ENDING  VERTEX "<<endl;5
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
    return 0;
}