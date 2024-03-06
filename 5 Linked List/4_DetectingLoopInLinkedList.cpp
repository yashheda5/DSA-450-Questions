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
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        if(head ==NULL || head ->next == NULL){
            return NULL;
        }
        Node* slow =head ;
        Node* fast=head->next;
        while(slow != NULL && fast != NULL && fast->next !=NULL){
            if(slow == fast ){
                return true;
            }
            slow =slow->next;
            fast=fast->next->next;
        }
        return false;
        // your code here
    }
};