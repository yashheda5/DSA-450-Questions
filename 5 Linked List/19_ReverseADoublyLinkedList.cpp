#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};

class Solution
{
    public:
    Node* reverseDLL(Node * head)
    {
        //Your code here
        Node* prev= NULL;
        Node* temp=NULL;
        while(head){
            temp = head->next;
            prev = head->prev;
            head->next=prev;
            head->prev =temp;
            prev=head;
            head =temp;
        }
        return prev;
    }
    
};