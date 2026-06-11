#include<bits/stdc++.h>
using namespace std;

void  BFS()
{


}

int   shortest_dist()
{
     queue<int> q;

     q.push()

     vector<int> distance;

     vector<int> resultant(n,-1);




}

int main()
{ 
 int V =8;
 int E = 10;

 vector<vector<int>> adj(V);
    adj[1].push_back(0); adj[0].push_back(1);
    adj[2].push_back(1); adj[1].push_back(2);
    adj[0].push_back(3); adj[3].push_back(0);
    adj[3].push_back(7); adj[7].push_back(3);
    adj[3].push_back(4); adj[4].push_back(3);
    adj[7].push_back(4); adj[4].push_back(7);
    adj[7].push_back(6); adj[6].push_back(7);
    adj[4].push_back(5); adj[5].push_back(4);
    adj[4].push_back(6); adj[6].push_back(4);
    adj[6].push_back(5); adj[5].push_back(6);



for(int i = 0; i < adj.size(); i++) {
        cout << i << " -> ";
        for(int v : adj[i]) cout << v << " ";
        cout << endl;
}


return 0;
}

using{namespace}