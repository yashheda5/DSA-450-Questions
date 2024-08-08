
//1st method using loop
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return NULL;
           ListNode* temp=head->next;
        head->next=NULL;
        while(temp){
            ListNode* temp2=temp->next;
            temp->next=head;
            head=temp;
            temp=temp2;
        }
        return head;
    }
};

//2nd method - using recursioin
class Solution {
    Node* reverse(Node* head,Node* temp){
        if(temp == NULL){
            return head;
        }
       Node* temp2=temp->next;
        temp->next=head;
        
        return reverse(temp,temp2);
    }
public:
    Node* reverseList(Node* head) {
        if(head==NULL || head->next == NULL) return head;
        Node*demo= reverse(head, head->next);
        head->next=NULL;
        return demo;
    }
};