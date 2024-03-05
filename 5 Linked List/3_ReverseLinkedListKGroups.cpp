#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
class Solution {
public:
    Node* reverseIt(Node*& head, int k) { 
        Node* prev = nullptr;
        Node* curr = head;
        Node* forward = nullptr;

        int count = 0;  // Counter for k elements

        // Reverse the first k nodes (if present)
        while (curr != nullptr && count < k) {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            count++;
        }

        // Handle the remaining list (if any)
        if (forward != nullptr) { // Only call recursively if there are more nodes
            head->next = reverseIt(curr, k);  // Recursive call for the remaining list
        } else { // Handle the case where there are less than k nodes initially
            head = prev; // If the loop didn't reverse any nodes, set the head to the previous node
        }

        // Return the new head of the reversed sublist
        return prev;
    }
};
