/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* curr = head;

        while (curr != NULL) {
            if (curr->child != NULL) {
                Node* next = curr->next;
                Node* child = flatten(curr->child);

                curr->next = child;
                child->prev = curr;
                curr->child = NULL;

                Node* tail = child;

                while (tail->next != NULL) {
                    tail = tail->next;
                }

                tail->next = next;

                if (next != NULL) {
                    next->prev = tail;
                }
            }

            curr = curr->next;
        }

        return head;
    }
};