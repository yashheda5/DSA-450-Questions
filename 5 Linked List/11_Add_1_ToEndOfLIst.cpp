#include <bits/stdc++.h>
using namespace std;
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
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
Node* reverse(Node* head ){
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
    cout<<"printing reverse "<<endl;
    print(prev);
    return prev;
}

  
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        cout<<"in the addone function"<<endl;
        if(head == NULL){
            return NULL;
        }
       
        
        Node* curr=reverse(head);
        Node* temp =curr;
        curr->data = curr->data +1;
        while(curr->data >=10){
            curr->data=curr->data%10;
            
            if(curr->next == NULL){
                curr->next = new Node (1);
                break;
            }
            curr = curr->next;
            curr->data=curr->data+1;
        }
        return reverse (temp);
        
    }

int main()
{
    Node *head = new Node(9);
    Node *second = new Node(9);
   
    head->next = second;
    
    print(head);
    Node* temp=addOne(head);
    print(temp);
    return 0;
}
