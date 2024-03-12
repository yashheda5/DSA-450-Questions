#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; 
class Solution{
  public:
    //Function to check whether the list is palindrome.
bool isPalindrome(Node* head) {
  if (head == NULL || head->next == NULL) {
    return true;
  }

  Node* slow = head;
  Node* fast = head->next;
  while (fast && fast->next) {
    slow = slow->next;
    fast = fast->next->next;
  }
Node* temp =slow ->next;
slow ->next =NULL;
Node* prev=NULL;
while(temp){
    Node* newNode = new Node(temp->data);
    newNode->next =prev;
    prev =newNode;
    temp =temp->next;
}
while(head && prev ){
    if(head->data != prev->data){
        return false;
    }
    head=head->next;
    prev=prev->next;
}

 

  return true;
}
    
};