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
void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    // your code goes here
    Node* slow =head;
    Node* fast=head->next;
    while(fast!= head && fast->next!=head){
       slow=slow ->next;
       fast=fast->next->next;
        }
        ;
        *head1_ref=head;
        *head2_ref=slow->next;
        slow ->next=head;
        Node* curr=*head2_ref;
        while(curr->next != *head1_ref){
            curr=curr->next;
        }
        curr->next=*head2_ref;
        
    }