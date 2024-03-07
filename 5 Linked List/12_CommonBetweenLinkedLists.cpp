#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};
        void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* reverse(Node* &head ){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* curr = head ;
    Node* prev = NULL;
    Node* temp =NULL;
    while(curr != NULL){
        temp=curr->next;
        curr->next= prev;
        prev =curr;
        curr= temp;
       
    }

    return prev;
}


    Node* findIntersection(Node* head1, Node* head2)
    {
        // code goes here.
       if(head1 ==NULL || head2 ==NULL){
           return NULL;
       }
       Node* add=NULL;
        while(head1 != NULL && head2 != NULL){
          if(head1->data == head2->data){
              
              Node* temp=new Node(head1->data);
              head1=head1->next;
              head2=head2->next;
              temp->next=add;
              add=temp;
              
          }else if(head1->data >head2->data){
              head2=head2->next;
          }else{
              head1=head1->next;
          }
        }
            reverse(add);
        
         
         
      
    }

int main(){
     Node *head = new Node(9);
    Node *second = new Node(9);
    Node *third = new Node(9);
    Node *fourth = new Node(9);
    head->next = second;
    second->next = third;
    third->next = fourth;


    Node* once=new Node(8);
    Node* doce=new Node(9);
    Node* trece=new Node(9);
    once->next = doce;
    doce->next=trece;
    

   Node*temp=findIntersection(head,once);
   print(temp);
}