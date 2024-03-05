#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
struct Node* reverse(struct Node *prev,struct Node *head){
if(head == NULL){
    return prev;
}
struct Node* temp=head ->next;
head->next = prev;
prev =head;
return reverse(head,temp);
}
    
class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        struct Node* prev=NULL;
       return reverse(prev,head);
    }
    
};