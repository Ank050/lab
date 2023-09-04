#include <bits/stdc++.h>
using namespace std;

#define V 5

int mink(int key[], bool mstSet[])
{
    int minVal = INT_MAX, minIndex;
    for (int i = 0; i < V; i++)
    {
        if (!mstSet[i] && key[i] < minVal)
        {
            minVal = key[i];
            minIndex = i;
        }
    }
    return minIndex;
}

void printP(int parent[], int graph[V][V])
{
    cout << "Edge \tWeight\n";
    for (int i = 1; i < V; i++)
        cout << parent[i] << " - " << i << " \t" << graph[i][parent[i]] << " \n";
}

void prims(int graph[V][V])
{
    int parent[V];
    int key[V];
    bool mstSet[V];

    for (int i = 0; i < V; i++)
    {
        key[i] = INT_MAX, mstSet[i] = 0;
    }
    key[0] = 0;
    parent[0] = -1;

    for (int i = 0; i < V - 1; i++)
    {
        int u = mink(key, mstSet);
        mstSet[u] = true;
        for (int v = 0; v < V; v++)
        {
            if (graph[u][v] && !mstSet[v] && graph[u][v] < key[v])
            {
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }
    printP(parent, graph);
}

int main()
{
    int graph[V][V] = {{0, 2, 0, 6, 0},
                       {2, 0, 3, 8, 5},
                       {0, 3, 0, 0, 7},
                       {6, 8, 0, 0, 9},
                       {0, 5, 7, 9, 0}};
    prims(graph);
    return 0;
}