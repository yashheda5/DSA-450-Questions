#include <bits/stdc++.h>
using namespace std;
class  Node {
    public:
    Node* left;
    Node* right;
    int data;
    Node(int data){
        this->data=data;
        left =NULL;
        right =NULL;
    }
};
Node * BuildTree(){
    int data;
    cin >> data;
    if(data == -1){
        return NULL;
    }
    Node* root=new Node(data);
    cout<<"Enter the left part of the tree "<<endl;
    root->left = BuildTree();
    cout<<"Enter the right part of the tree "<<endl;
    root->right = BuildTree();
    return root;
}
Node* search(Node* root, int value ){
    if(root==NULL || value==root->data){
        return root;
    }else if(value > root->data){
        search(root->right, value);
    }else{
        search(root->left, value);
    }
}
int main(){
Node* root=NULL;
root=BuildTree();
int value =3;
if(search(root, value)){
    cout<<"Value found "<<endl;
}else{
    cout<<"Value not found "<<endl;
}
}