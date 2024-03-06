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
    struct Node *reverseIt (struct Node * &head, int k)
    { 
        // Complete this method
        struct Node * prev =NULL;
        struct Node * curr =head;
        struct Node * forward =NULL;
        int count =0;
        while(count<k && curr!=NULL){
            forward =curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            count++;
        }
       if(forward != NULL){
            head->next=reverseIt(curr,k);
       }
        return prev;
        
    
       
         
    }
};
