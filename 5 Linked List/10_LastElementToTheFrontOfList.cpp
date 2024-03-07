#include <bits/stdc++.h>
using namespace std;
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

Node *delAddLastNode(Node *head){
	// Write your code here.
    if(head == NULL || head->next==NULL){
        return head;
    }
  Node* curr=head;
  Node* temp=head->next;
  while(true){
        if (temp->next == NULL) {
          curr->next = NULL;
          temp->next = head;
          break;
        }
        curr = temp;
        temp = temp->next;
  }
  return temp;
}