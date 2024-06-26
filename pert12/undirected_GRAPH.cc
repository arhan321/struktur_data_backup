#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<int> adj[], int v, int w) {
    adj[v].push_back(w);
    adj[w].push_back(v); // Karena graph tak berarah
}

void printGraph(vector<int> adj[], int V) {
    for (int v = 0; v < V; ++v) {
        cout << "Adjacency list of vertex " << v << ":\n head ";
        for (auto x : adj[v])
            cout << "-> " << x;
        cout << endl;
    }
}

int main() {
    int V = 5;
    vector<int> adj[V];

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);

    printGraph(adj, V);

    return 0;
}
