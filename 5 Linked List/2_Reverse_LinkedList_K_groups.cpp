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
    struct node *reverseIt (struct node *head, int k)
    { 
        // Complete this method
        node* prev=NULL;
        node* curr=head;
        node* forward=NULL;
        int count =0;
        while(count<k && curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            count++;
        }
        if(curr){
            head->next=reverseIt(curr,k);
        }
        return prev;
    }
};