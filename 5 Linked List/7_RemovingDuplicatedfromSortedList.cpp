#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
Node *removeDuplicates(Node *head)
{
 // your code goes here
if(head ==NULL || head->next ==NULL){
    return head;
}
Node* curr =head;
Node* temp=curr->next;
while(temp !=NULL){
    if(curr->data == temp->data){
        curr->next=temp->next;
        temp=temp->next;
    }else{
        curr=temp;
    temp=temp->next;
    }
}
return head;
}