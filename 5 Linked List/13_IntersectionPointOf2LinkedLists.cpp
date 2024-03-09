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
int intersectPoint(Node* head1, Node* head2)
{
    Node* h1 = head1;
    Node* h2 = head2;
    
    // Advance h1 and h2 to the end of their respective lists
    while (h1 && h2) {
        h1 = h1->next;
        h2 = h2->next;
    }
    
    // If one list is longer, move its head pointer forward
    while (h1) {
        head1 = head1->next;
        h1 = h1->next;
    }
    while (h2) {
        head2 = head2->next;
        h2 = h2->next;
    }
    
    // Traverse both lists until the intersection point is found
    while (head1 && head2) {
        if (head1 == head2) {
            return head1->data; // Intersection point found
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    
    return -1; // No intersection point
}
