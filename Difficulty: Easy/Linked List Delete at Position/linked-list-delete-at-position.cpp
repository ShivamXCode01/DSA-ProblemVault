/* Structure of Linked List Node
class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // code here
        if(head == NULL){
            return NULL;
        }
        if (x == 1) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1 ;
        
        while (cnt < x && curr != NULL){
            prev = curr;
            curr = curr -> next;
            cnt ++;
        }
        
        if (x == 1) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete(curr);
        
        
        
        return head;
    }
};