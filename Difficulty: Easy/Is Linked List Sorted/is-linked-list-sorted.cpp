/* Structure of linked list Node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/

class Solution {
public:
    bool isSorted(Node* head) {

        if (head == NULL || head->next == NULL) {
            return true;
        }

        bool increasing = true;
        bool decreasing = true;

        Node* temp = head;

        while (temp->next != NULL) {

            if (temp->data > temp->next->data) {
                increasing = false;
            }

            if (temp->data < temp->next->data) {
                decreasing = false;
            }

            temp = temp->next;
        }

        return increasing || decreasing;
    }
};