#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

class Graph
{
    int V;
    vector<vector<int>> adj;

    void toplogsortutil(int v, vector<bool> &visited, stack<int> &stack)
    {
        visited[v] = true;
        for (int i : adj[v])
        {
            if (!visited[i])
            {
                toplogsortutil(i, visited, stack);
            }
        }
        stack.push(v);
    }

public:
    Graph(int V)
    {
        this->V = V;
        adj.resize(V);
    }

    void addEdge(int u, int v)
    {
        adj[u].push_back(v);
    }

    void topLogicSort()
    {
        stack<int> stack;
        vector<bool> visited(V);
        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                toplogsortutil(i, visited, stack);
            }
        }
        while (!stack.empty())
        {
            cout << stack.top() << " ";
            stack.pop();
        }
    }
};

int main()
{
    Graph g_random(7);
    g_random.addEdge(0, 3);
    g_random.addEdge(0, 4);
    g_random.addEdge(1, 4);
    g_random.addEdge(2, 5);
    g_random.addEdge(3, 6);
    g_random.addEdge(5, 6);

    cout << "Following is a Topological Sort of the given graph:\n";
    g_random.topLogicSort();

    return 0;
}