#include <bits/stdc++.h>
using namespace std;

class Graph{
    private:
        int vertex, edge;
        
        // for weightted graph like- {A, V, 100}
        unordered_map<string, list<pair<string, int>> > adjacencyList;
        
    public:
        // default constructor
        Graph(int v, int e) {
            vertex = v;
            edge = e;
        }
        // currently we're not using edge var but can be used in future code
        
        // by default taking it as bi-directed
        void addEdge(string node1, string node2, int weight, bool isBidirected = true) {
            adjacencyList[node1].push_back({node2, weight});
            
            if(isBidirected == true){
                adjacencyList[node2].push_back({node1, weight});
            }
        }
        
        void printAdjacencyList() {
            for(auto vertexConnectedTo : adjacencyList) {
                // now we'll have a pair which is {string, list of {string, int}}
                string ver = vertexConnectedTo.first;
                list<pair<string, int>> connectedTo = vertexConnectedTo.second;
                
                cout<<"vertex "<<ver<<" connected to : ";
                
                for(auto node : connectedTo) {
                    cout<<"{"<<node.first<<","<<node.second<<"}, ";
                }
                cout<<"\n";
            }
        }
};

int main()
{
    // implementing graph- making adjacencyList
    int i, vertex, edge;
    cout<<"Enter total number of vertex and edge : ";
    cin>>vertex>>edge;
    
    if(vertex < 1) {
        return 0;
    }
    
    Graph g(vertex, edge);
    
    // can run in loop using variable edge, but currently hard coded
    // <--loop-->
    
    // ip - vertex = 4, edge = 5
    g.addEdge("A", "B", 20);
    g.addEdge("B", "D", 40);
    g.addEdge("A", "C", 10);
    g.addEdge("C", "D", 40);
    g.addEdge("A", "D", 50, false);
    
    g.printAdjacencyList();

    return 0;
}
