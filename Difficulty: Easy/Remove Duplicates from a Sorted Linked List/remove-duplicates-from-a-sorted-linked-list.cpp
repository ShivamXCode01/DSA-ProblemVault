/* Structure of linked list Node
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
    Node* removeDuplicates(Node* head) {
        // code here
        // empty LL
        if(head == NULL){
            return NULL;
        }
        Node * curr = head;

        while(curr != NULL){
            if ((curr -> next != NULL) && (curr -> data == curr -> next -> data)){
                Node *next_next = curr -> next -> next;
                Node *nodeToDelete = curr -> next;
                delete(nodeToDelete);
                curr -> next = next_next;
            }
            else{
                curr = curr -> next;
            }
        }
        return head;

    }
};