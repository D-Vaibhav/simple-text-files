#include <bits/stdc++.h>

using namespace std;

class Graph{
  int numberOfNodes;
  map<string, list<pair<string, int>>> graphAdjList;
  
  public:
    Graph(int numberOfNodes){
      this->numberOfNodes = numberOfNodes;
    }
  
  
    void addEdge(string node1, string node2, int weight = 1, bool isBiDirected = true){
      pair<string, int> connectedTo;
      
      connectedTo.first = node2;
      connectedTo.second = weight;
      
      graphAdjList[node1].push_back(connectedTo);
      
      if(isBiDirected){
        connectedTo.first = node1;
        connectedTo.second = weight;
        
        graphAdjList[node2].push_back(connectedTo);
      }
      return ;
    }
    
    
    void printGraphAdjListUsingForEach(){
      cout<<"printing adjacency list of the directed weighted graph\n";
      cout<<"------------------------------------------------------\n";
      
      for(auto itrMap : graphAdjList){
        cout<<itrMap.first<<" : ";
        
        for(auto itrList : itrMap.second){
          cout<<"("<<itrList.first<<","<<itrList.second<<"), ";
        }
        cout<<"\n";
      }
      cout<<endl<<endl;
    }
    
    
    void dfsTraversal(string startingNode){
      
    }
};

int main(){
    Graph weightedGraph(4);
    
    weightedGraph.addEdge("a", "b", 20, true);
    weightedGraph.addEdge("b", "d", 40);
    weightedGraph.addEdge("a", "c", 10);
    weightedGraph.addEdge("c", "d", 40);
    weightedGraph.addEdge("a", "d", 50, false);
    
    // construction
    weightedGraph.printGraphAdjListUsingForEach();
    
    // bfsTraversal
    // weightedGraph.bfsTraversal("a");
    // weightedGraph.bfsTraversal("b");
    // weightedGraph.bfsTraversal("c");
    // weightedGraph.bfsTraversal("d");
    
    // // bfsTraversal
    // vector<string> bfs = weightedGraph.bfsTraversalReturingVector("d");
    // for(int i = 0; i<bfs.size(); i++){
    //   cout<<bfs[i]<<", ";
    // }
    cout<<endl<<endl;
    
    return 0;
}