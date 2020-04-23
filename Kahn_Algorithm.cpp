// This is Kahn Algorithm for Topological Sort
// Time Complexity O(V+E)

// BY Darshan Kabariya

#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> Adj;
vector<int> Incomming;
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int V, E, t_1, t_2;
    cin >> V >> E;
    Adj.reserve(V + 1);
    Incomming.reserve(V + 1);
    for (int i = 0; i < E; i++)
    {
        cin >> t_1 >> t_2;
        Adj[t_1].push_back(t_2);
        Incomming[t_2] += 1;
    }
    queue<int> Q_next_node;
    for (int i = 1; i <= V; i++)
    {
        if (Incomming[i] == 0)
            Q_next_node.push(i);
    }
    while (true)
    {
        if (Q_next_node.size() == 0)
            break;
        int temp = Q_next_node.front();
        Q_next_node.pop();
        cout << temp << "-->";
        for (int i = 0; i < Adj[temp].size(); i++)
        {
            Incomming[Adj[temp][i]] -= 1;
            if (Incomming[Adj[temp][i]] == 0)
            {
                Q_next_node.push(Adj[temp][i]);
            }
        }
    }
    cout << endl;
}