#include <bits/stdc++.h>
using namespace std;

// Graph representation using adjacency list
class Graph {
private:
    int V;  // Number of vertices
    vector<vector<int>> adj;  // Adjacency list
    bool directed;
    
public:
    Graph(int vertices, bool isDirected = false) : V(vertices), directed(isDirected) {
        adj.resize(V);
    }
    
    // Add edge to the graph
    void addEdge(int u, int v) {
        adj[u].push_back(v);
        if (!directed) {
            adj[v].push_back(u);
        }
    }
    
    // Get adjacency list for a vertex
    const vector<int>& getNeighbors(int v) const {
        return adj[v];
    }
    
    // Get number of vertices
    int getVertices() const {
        return V;
    }
    
    // Print the graph
    void printGraph() {
        for (int i = 0; i < V; i++) {
            cout << "Vertex " << i << ": ";
            for (int neighbor : adj[i]) {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }
};

// Weighted Graph representation
class WeightedGraph {
private:
    int V;
    vector<vector<pair<int, int>>> adj;  // (destination, weight)
    bool directed;
    
public:
    WeightedGraph(int vertices, bool isDirected = false) : V(vertices), directed(isDirected) {
        adj.resize(V);
    }
    
    void addEdge(int u, int v, int weight) {
        adj[u].push_back({v, weight});
        if (!directed) {
            adj[v].push_back({u, weight});
        }
    }
    
    const vector<pair<int, int>>& getNeighbors(int v) const {
        return adj[v];
    }
    
    int getVertices() const {
        return V;
    }
};

// DFS implementation
class DFS {
private:
    vector<bool> visited;
    vector<int> parent;
    vector<int> discovery_time;
    vector<int> finish_time;
    int time;
    
public:
    void dfs(const Graph& g, int start) {
        int V = g.getVertices();
        visited.resize(V, false);
        parent.resize(V, -1);
        discovery_time.resize(V, 0);
        finish_time.resize(V, 0);
        time = 0;
        
        dfsUtil(g, start);
    }
    
private:
    void dfsUtil(const Graph& g, int v) {
        visited[v] = true;
        discovery_time[v] = ++time;
        
        cout << v << " ";
        
        for (int neighbor : g.getNeighbors(v)) {
            if (!visited[neighbor]) {
                parent[neighbor] = v;
                dfsUtil(g, neighbor);
            }
        }
        
        finish_time[v] = ++time;
    }
};

// BFS implementation
class BFS {
private:
    vector<bool> visited;
    vector<int> distance;
    vector<int> parent;
    
public:
    void bfs(const Graph& g, int start) {
        int V = g.getVertices();
        visited.resize(V, false);
        distance.resize(V, -1);
        parent.resize(V, -1);
        
        queue<int> q;
        q.push(start);
        visited[start] = true;
        distance[start] = 0;
        
        while (!q.empty()) {
            int v = q.front();
            q.pop();
            
            cout << v << " ";
            
            for (int neighbor : g.getNeighbors(v)) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    distance[neighbor] = distance[v] + 1;
                    parent[neighbor] = v;
                    q.push(neighbor);
                }
            }
        }
        cout << endl;
    }
    
    // Get shortest path from start to end
    vector<int> getShortestPath(int end) {
        vector<int> path;
        if (distance[end] == -1) return path;  // No path exists
        
        for (int v = end; v != -1; v = parent[v]) {
            path.push_back(v);
        }
        reverse(path.begin(), path.end());
        return path;
    }
};

// Dijkstra's Algorithm for weighted graphs
class Dijkstra {
private:
    vector<int> distance;
    vector<int> parent;
    
public:
    vector<int> shortestPath(const WeightedGraph& g, int start) {
        int V = g.getVertices();
        distance.resize(V, INT_MAX);
        parent.resize(V, -1);
        
        // Min-heap: (distance, vertex)
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
        distance[start] = 0;
        pq.push({0, start});
        
        while (!pq.empty()) {
            int dist = pq.top().first;
            int u = pq.top().second;
            pq.pop();
            
            if (dist > distance[u]) continue;
            
            for (auto& edge : g.getNeighbors(u)) {
                int v = edge.first;
                int weight = edge.second;
                
                if (distance[u] + weight < distance[v]) {
                    distance[v] = distance[u] + weight;
                    parent[v] = u;
                    pq.push({distance[v], v});
                }
            }
        }
        
        return distance;
    }
};

// Example usage
int main() {
    // Create an undirected graph
    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(2, 4);
    g.addEdge(3, 4);
    g.addEdge(3, 5);
    g.addEdge(4, 5);
    
    cout << "Graph structure:" << endl;
    g.printGraph();
    
    cout << "\nDFS starting from vertex 0:" << endl;
    DFS dfs;
    dfs.dfs(g, 0);
    cout << endl;
    
    cout << "\nBFS starting from vertex 0:" << endl;
    BFS bfs;
    bfs.bfs(g, 0);
    
    // Weighted graph example
    WeightedGraph wg(5);
    wg.addEdge(0, 1, 4);
    wg.addEdge(0, 2, 2);
    wg.addEdge(1, 2, 1);
    wg.addEdge(1, 3, 5);
    wg.addEdge(2, 3, 8);
    wg.addEdge(2, 4, 10);
    wg.addEdge(3, 4, 2);
    
    cout << "\nDijkstra's shortest paths from vertex 0:" << endl;
    Dijkstra dijkstra;
    vector<int> distances = dijkstra.shortestPath(wg, 0);
    
    for (int i = 0; i < distances.size(); i++) {
        cout << "Distance to vertex " << i << ": " << distances[i] << endl;
    }
    
    return 0;
} 