#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
}; 
vector<int> reverseLevelOrder(Node *root)
{
    // code here
    
    vector<int>arr;
    if(root == NULL){
        return arr;
    }
    stack<int> s;
    queue<Node*>q;
    q.push(root);
    
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        s.push(temp->data);
        if(temp->right){
            q.push(temp->right);
        }
        if(temp->left){
            q.push(temp->left);
        }
        
    }
    while(!s.empty()){
        arr.push_back(s.top());
        s.pop();
    }
    return arr;
}