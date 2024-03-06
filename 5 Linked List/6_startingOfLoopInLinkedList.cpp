#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
};

Node *firstNode(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    //    Write your code here.
    Node *slow = head;
    Node *fast = head;
    while (slow != NULL && fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            break;
        }
    }
    if (fast == head)
    {

        return slow;
    }

    if (slow == fast)
    {
        slow = head;
        while (fast->next != slow->next)
        {
            slow = slow->next;
            fast = fast->next;
        }
        slow = slow->next;
        return slow;
    }
    return NULL;
}