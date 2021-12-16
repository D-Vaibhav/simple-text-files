#include <bits/stdc++.h>

using namespace std;

class Graph{
  int numberOfNodes;
  map<string, list<pair<string, int>>> graphAdjList;
  
  public:
    Graph(int numberOfNodes){
      this->numberOfNodes = numberOfNodes;
    }
  
    void addEdge(string node1, string node2, int weight, bool isBiDirected=true){
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
    }
    
    void printGraphAdjListUsingComplexLoops(){
      cout<<"printing adjacency list of the directed weighted graph\n";
      cout<<"------------------------------------------------------\n";
      
      for(auto itrMap = graphAdjList.begin(); itrMap != graphAdjList.end(); itrMap++){
        cout<<itrMap->first<<" : ";
        
        auto itrList = itrMap->second.begin();
        
        while( itrList != itrMap->second.end()){
          cout<<"("<<itrList->first<<","<<itrList->second<<"), ";
          itrList++;
        }
        cout<<endl;
      }
    }
};

int main(){
    Graph weightedGraph(4);
    
    weightedGraph.addEdge("a", "b", 20, true);
    weightedGraph.addEdge("b", "d", 40);
    weightedGraph.addEdge("a", "c", 10);
    weightedGraph.addEdge("c", "d", 40);
    weightedGraph.addEdge("a", "d", 50, false);
    
    weightedGraph.printGraphAdjListUsingForEach();
    cout<<endl;
    weightedGraph.printGraphAdjListUsingComplexLoops();
    
    return 0;
}