#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
int visited[N];
vector<int> adj[N];

void dfs(int u)
{
    visited[u] = 1;
    for (int v : adj[u]) 
    {
        if (!visited[v]) dfs(v);
    }
    cout << "node "<< u << endl;
}
int main() 
{
    int n, m;
    cin >> n >> m;
    for (int i = 0;i < m;i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
    return 0;
}