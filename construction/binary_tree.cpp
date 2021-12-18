#include <bits/stdc++.h>
using namespace std;

struct Node{
    string data;
    struct Node *left, *right;
    
    Node(string val){
      data = val;
      left = NULL;
      right = NULL;
    }
};

void printTreePreorder(Node *node){
    if(node == NULL) return;
  
    cout<<node->data<<" ";
    printTreePreorder(node->left);
    printTreePreorder(node->right);
}

void printTreeInorder(Node *node){
    if(node == NULL) return;
  
    printTreeInorder(node->left);
    cout<<node->data<<" ";
    printTreeInorder(node->right);
}

void printTreePostorder(Node *node){
    if(node == NULL) return;
  
    printTreePostorder(node->left);
    printTreePostorder(node->right);
    cout<<node->data<<" ";
}

int main() 
{
    Node *rootNode = new Node("A");
    Node *nodeB = new Node("B");
    Node *nodeC = new Node("C");
    Node *nodeD = new Node("D");
    Node *nodeE = new Node("E");
    Node *nodeF = new Node("F");
    
    rootNode->left = nodeB;
    rootNode->right = nodeC;
    
    nodeB->left = nodeD;
    nodeB->right = nodeE;
    
    nodeD->right = nodeF;
    
    printTreePreorder(rootNode);
    cout<<endl;
    printTreeInorder(rootNode);
    cout<<endl;
    printTreePostorder(rootNode);
    
    return 0;
}