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
class Solution {
public:
    void reverseLinkedList(Node* &head) {  // reverse karne ka function
        Node *current = head, *prev = NULL, *next = NULL;
        while (current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }

    Node* addTwoLists(Node* first, Node* second) {
        reverseLinkedList(first);    // pehle dono ko reverse kardo, then hum place by place add karenge
        reverseLinkedList(second);

        Node* result = NULL;    // hum answer aise banayenge, ek nayi list k saath
        int carry = 0;   // agar ek unit ka sum > 10 hai to carry maintainn karenge or next unit me add hoga jake ab ye

        while (first != NULL || second != NULL || carry != 0) {
            int sum = carry;
            if (first != NULL) {     // unit ka sum likh lo, and aage badha do pointer
                sum += first->data;
                first = first->next;
            }
            if (second != NULL) {
                sum += second->data;
                second = second->next;
            }
            carry = sum / 10;
            sum = sum % 10;    // is ek unit pe hum ek hi number enter karenge
            Node* newNode = new Node(sum);  // ek nayi node banao
            newNode->next = result;    // or answer k pichhe chipkate jao
            result = newNode;
        }
        return result;
    }
};