/*
class Node {
public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
    private:
    Node* detectLoop(Node* head) {
         if (head == NULL) {
             return NULL;
         }

         Node* slow = head;
         Node* fast = head;

         while (fast != NULL && fast->next != NULL) {
             slow = slow->next;
             fast = fast->next->next;

             if (slow == fast) {
                 return slow;
             }
         }

         return NULL;
     }
  public:
    int cycleStart(Node* head) {
        // code here
        if (head == NULL){
            return NULL;
        }
        Node * intersection = detectLoop(head);
        // If there is no loop in LL
        if (intersection == NULL) {
            return -1;
        }
        Node * slow = head ;
        while (slow != intersection){
            slow = slow -> next;
            intersection = intersection -> next;
        }
        return slow -> data;
    }
};