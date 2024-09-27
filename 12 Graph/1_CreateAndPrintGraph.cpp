#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Graph
{
public:
    unordered_map<T, list<pair<T, int>>> adjList;
    void addEdge(T u, T v, int weight, bool direction)
    {
        adjList[u].push_back({v, weight});
        if (!direction)
        {
            adjList[v].push_back({u, weight});
        }
    }
    void printGraph()
    {
        for (auto node : adjList)
        {
            cout << node.first << "->";
            for (auto neighbor : node.second)
            {
                
                    cout << "(" << neighbor.first << "," << neighbor.second << "),";
                
                
            } cout << endl;
        }
    }
};
int main()
{
    Graph<int> g;
    g.addEdge(0, 1, 5, 1);
    g.addEdge(1, 2, 8, 1);
    g.addEdge(0, 2, 6, 1);
    g.printGraph();
}