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
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        if( head == NULL || head->next == NULL){
            return ;
        }
        Node* slow =head;
        Node* fast=head;
        while(slow!= NULL && fast != NULL && fast->next != NULL){
            
            fast =fast->next->next;
            slow =slow->next;
            if(slow == fast ){
                break;
            }
           
        }
        if(fast == head){
            while(fast->next !=slow ){
                fast=fast->next;
            }
            fast->next=NULL;
        }else if(slow == fast) {
            slow =head;
        while(slow ->next != fast->next){
            slow =slow ->next;
            fast=fast->next;
        }
        fast->next=NULL;
            
        }
        
        
        
    }
};