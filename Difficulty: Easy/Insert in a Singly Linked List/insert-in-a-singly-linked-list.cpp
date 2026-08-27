/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node* insertPos(Node* head, int pos, int val) {
        // code here
        Node * newNode = new Node(val);
        
        while (head == NULL){
            return newNode;
        }
        
        if (pos == 1) {
            newNode->next = head;
            return newNode;
        }
        
        Node * temp = head;
        int cnt = 1; 
        while (cnt < pos-1){
            temp = temp -> next;
            cnt ++;
        }
        newNode -> next = temp -> next;
        temp -> next = newNode;
        
        return head;
    }
};