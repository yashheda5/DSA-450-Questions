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