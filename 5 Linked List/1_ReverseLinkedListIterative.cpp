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
        struct Node* prev=NULL;
        struct Node* forward=NULL;
        
        while(head != NULL){
            forward=head->next;
            head->next=prev;
            prev =head;
            head =forward;
        }
        return prev;
    }
    
};