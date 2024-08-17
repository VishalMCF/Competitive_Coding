#include <bits/stdc++.h>

using namespace std;

class Graph
{

    int V;        // total number of the vertices in the graph
    list<int> *l; // pointer to the graph

public:
    Graph(int v)
    {
        V = v;
        l = new list<int>[v];
    };

    void addEdge(int i, int j, bool isDirected)
    {
        l[i].push_back(j);
        if (!isDirected)
        {
            l[j].push_back(i);
        }
    };

    void printGraph()
    {
        for (int i = 0; i < V; i++)
        {
            cout << i << " --> ";
            for (auto node : l[i])
            {
                cout << node << ", ";
            }
            cout << "\n";
        }
    };
};

int main()
{
    cout << "Hello World!!\n";

    Graph g(6);

    g.addEdge(0, 1, true);
    g.addEdge(1, 2, true);
    g.addEdge(2, 3, true);
    g.addEdge(4, 3, true);
    g.addEdge(4, 5, true);
    g.addEdge(5, 3, true);

    g.printGraph();
}