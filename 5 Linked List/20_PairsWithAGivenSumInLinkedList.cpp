#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};
vector<pair<int, int>> findPairs(Node* head, int k)
{
    // Write your code here.
    Node* temp1 =head;
    Node* temp2 =head;
  vector<pair<int, int>>p;


    while(temp1){
        temp2=temp1->next;
        while(temp2){
              int sum=0;
              sum=temp1->data+temp2->data;
              if(sum == k){
                  p.push_back(make_pair(temp1->data,temp2->data));
              }
              if(sum>k){
                  break;
              }
              temp2=temp2->next;
        }
        temp1=temp1->next;
        
    }
    return p;
}