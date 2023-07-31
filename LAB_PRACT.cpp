#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

/*
#Merge

*Divide and conquer
*Theata nlogn time
*Stable
*Not inplace
*Space omega N

void merge(int arr[], int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int left[n1];
    int right[n2];
    int i = 0;
    vector<int> result;
    for (i = 0; i < n1; i++)
    {
        left[i] = arr[low + i];
    }
    for (i = 0; i < n2; i++)
    {
        right[i] = arr[mid + i + 1];
    }
    i = 0;
    int j = 0;
    while (i < n1 && j < n2)
    {
        if (left[i] < right[j])
        {
            result.push_back(left[i]);
            i++;
        }
        else
        {
            result.push_back(right[j]);
            j++;
        }
    }
    for (int k = i; k < n1; k++)
    {
        result.push_back(left[k]);
    }

    for (int k = j; k < n2; k++)
    {
        result.push_back(right[k]);
    }
    for (i = 0; i < result.size(); i++)
    {
        arr[low + i] = result[i];
    }
}

void mergeSort(int arr[], int l, int h)
{
    if (h > l)
    {
        int m = (h + l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, h);
        merge(arr, l, m, h);
    }
}

int main()
{
    int n;
    cin >> n;
    int A[n];
    int i = 0;
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    mergeSort(A, 0, n - 1);
    for (i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}

*/

/*
QUICK SORT

Divide and conquer
Not Stable
Worst case O(n^2)
Best case O(nlogn)
Inplace


int part(int arr[], int l, int h)
{
    int p = arr[h];
    int i = l - 1;

    for (int j = l; j < h; j++)
    {
        if (arr[j] < p)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]);
    return (i + 1);
}

void qsort(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = part(arr, l, h);
        qsort(arr, l, p - 1);
        qsort(arr, p + 1, h);
    }
}

int main()
{
    int n;
    cin >> n;
    int A[n];
    int i = 0;
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    qsort(A, 0, n - 1);
    for (int x : A)
        cout << x << " ";
    return 0;
}
*/

/*
BUBBLE SORT

Best case O(n)
Worst case O(n^2)
Space O(1)


void bubbleSort(vector<int> &array)
{
    bool swapped;
    do
    {
        swapped = false;
        for (size_t i = 0; i < array.size() - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                swap(array[i], array[i + 1]);
                swapped = true;
            }
        }
    } while (swapped);
}

int main()
{
    vector<int> array = {2, 5, 4, 3, 1};

    bubbleSort(array);

    for (int x : array)
    {
        cout << x << " ";
    }
    return 0;
}
*/

/*
SELECTION SORT

Best case O(n)
Worst case O(n^2)
Space O(1)


int main()
{
    vector<int> array = {2, 5, 4, 3, 1};

    int i = 0;
    for (i = 0; i < array.size(); i++)
    {
        int MIN = INT_MAX;
        int index = 0;
        for (int j = i; j < array.size(); j++)
        {
            if (array[j] < MIN)
            {
                MIN = array[j];
                index = j;
            }
            swap(array[i], array[index]);
        }
    }

    for (int x : array)
    {
        cout << x << " ";
    }
    return 0;
}

*/

/*

DFS

const int n = 6;
vector<char> visited;
vector<vector<char>> graph(n);

class g
{
public:
    bool vis(char node)
    {
        for (int i = 0; i < visited.size(); i++)
        {
            if (node == visited[i])
            {
                return true;
            }
        }
        return false;
    }

    void dfs(vector<vector<char>> &graph, char node)
    {
        if (!vis(node))
        {
            cout << node << "->";
            visited.push_back(node);
            int j = 0;
            int index = 0;
            for (j = 0; j < n; j++)
            {
                if (graph[j][0] == node)
                {
                    index = j;
                    break;
                }
            }
            for (char adjacentNode : graph[index])
            {
                dfs(graph, adjacentNode);
            }
        }
    }
};

int main()
{
    graph[0].push_back('A');
    graph[0].push_back('B');
    graph[0].push_back('C');
    graph[1].push_back('B');
    graph[1].push_back('D');
    graph[1].push_back('E');
    graph[2].push_back('C');
    graph[2].push_back('B');
    graph[2].push_back('F');
    graph[3].push_back('D');
    graph[4].push_back('E');
    graph[4].push_back('F');
    graph[5].push_back('F');

    char a = 'A';
    g var;
    var.dfs(graph, a);
    return 0;
}
*/

/*

BFS

#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

unordered_map<char, vector<char>> graph = {
    {'A', {'B', 'C'}},
    {'B', {'A', 'C', 'D'}},
    {'C', {'A', 'B', 'D'}},
    {'D', {'B', 'C', 'E'}},
    {'E', {'D', 'F'}},
    {'F', {'E', 'G'}},
    {'G', {'F'}}};

unordered_map<char, bool> visited;
unordered_map<char, int> level;
unordered_map<char, char> parent;
queue<char> q;
vector<char> path;

int main()
{
    char start = 'A';
    visited[start] = true;
    level[start] = 0;
    q.push(start);

    while (!q.empty())
    {
        char temp = q.front();
        q.pop();
        path.push_back(temp);
        for (char v : graph[temp])
        {
            if (!visited[v])
            {
                visited[v] = true;
                parent[v] = temp;
                level[v] = level[temp] + 1;
                q.push(v);
            }
        }
    }

    char final = 'F';
    vector<char> ans;
    while (final != '\0')
    {
        ans.push_back(final);
        final = parent[final];
    }
    reverse(ans.begin(), ans.end());

    // Print the result
    for (char ch : ans)
    {
        cout << ch << " ";
    }
    cout << endl;

    return 0;
}

*/

/*

DFS TOPOLOGICAL SORT


#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

class Graph
{
    int val;
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
    Graph(int val)
    {
        this->val = val;
        adj.resize(val);
    }

    void addEdge(int u, int v)
    {
        adj[u].push_back(v);
    }

    void topologicalsort()
    {
        stack<int> stack;
        vector<bool> visited(val);
        for (int i = 0; i < val; i++)
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
    Graph g(7);
    g.addEdge(0, 3);
    g.addEdge(0, 4);
    g.addEdge(1, 4);
    g.addEdge(2, 5);
    g.addEdge(3, 6);
    g.addEdge(5, 6);

    cout << "Following is a topological sort of the given graph :\n";
    g.topologicalsort();

    return 0;
}
*/

/*

TOPOLOGICAL SOURCE REMOVAL

*/

#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;

class Graph
{
    int val;
    vector<vector<int>> adj;

public:
    Graph(int val)
    {
        this->val = val;
        this->adj = vector<vector<int>>(val);
    }

    void addEdge(int u, int v)
    {
        adj[u].push_back(v);
    }

    void topologicalSort()
    {
        vector<int> in_degree(val, 0);

        for (int u = 0; u < val; u++)
        {
            for (int v : adj[u])
                in_degree[v]++;
        }

        queue<int> q;
        for (int i = 0; i < val; i++)
        {
            if (in_degree[i] == 0)
                q.push(i);
        }

        int count = 0;
        vector<int> top_order;

        while (!q.empty())
        {
            int u = q.front();
            q.pop();
            top_order.push_back(u);

            for (int v : adj[u])
            {
                if (--in_degree[v] == 0)
                    q.push(v);
            }

            count++;
        }

        if (count != val)
        {
            cout << "There exists a cycle in the graph\n";
            return;
        }

        for (int i = 0; i < top_order.size(); i++)
            cout << top_order[i] << " ";
    }
};

int main()
{
    Graph g(6);
    g.addEdge(5, 2);
    g.addEdge(5, 0);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);

    cout << "Following is the topological sort of given graph : \n";
    g.topologicalSort();

    return 0;
}