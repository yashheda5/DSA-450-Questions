#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};
Node* merge(Node* left , Node* right){
    if(left ==NULL){
        return right;
    }
    if(right == NULL){
        return left ;
    }
    Node* ans=NULL; // Initialize ans to NULL
    Node* curr=NULL; // Initialize curr to NULL
    if(left->data < right->data){
        ans = left;
        left = left->next;
    } else {
        ans = right;
        right = right->next;
    }
    curr = ans; // Update curr to point to the current node
    
    while(left && right ){
        if(left->data < right->data){
            curr->next =left;
            left=left->next;
        } else {
            curr->next=right;
            right =right->next;
        }
        curr =curr->next;
    }
    if(left){
        curr->next =left;
       
    }
    if(right){
        curr->next=right;
       
    }
    return ans; // Return the head of the merged list
}

Node* getMid(Node* head){
    if(!head || !head->next)
        return head; // Return head if list has 0 or 1 node
    
    Node* slow = head;
    Node* fast = head->next;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        if(!head || !head->next)
            return head; // Return head if list has 0 or 1 node
        
        Node* mid = getMid(head);
        Node* left = head;
        Node* right = mid->next;
        mid->next = NULL; // Split the list into two halves
        
        left = mergeSort(left);
        right = mergeSort(right);
        return merge(left, right); // Merge the sorted halves
    }
};
