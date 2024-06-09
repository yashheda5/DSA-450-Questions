#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node* curr=head->next;
        head->next=NULL;
        while(curr){
            Node* temp=curr->next;
            curr->next=head;
            head=curr;
            curr=temp;
        }
        return head;
        
    }
    
};