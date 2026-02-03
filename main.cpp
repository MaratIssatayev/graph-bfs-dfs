#include "Graph.h"

int main() {
    Graph g(6, false);

    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.addEdge(2,5);

    vector<int> order, dist, parent;

    g.BFS(0, order, dist, parent);

    cout << "BFS order: ";
    for (int v : order) cout << v << " ";
    cout << endl;

    vector<int> path = g.shortestPathUnweighted(0,5);
    cout << "Shortest path 0 -> 5: ";
    for (int v : path) cout << v << " ";
    cout << endl;

    return 0;
}
