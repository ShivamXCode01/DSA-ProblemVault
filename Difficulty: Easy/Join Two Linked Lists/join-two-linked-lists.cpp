/* Structure of linked list Node
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* joinLists(Node* head1, Node* head2) {
        // code here
        if (head1 == NULL){
            return head2;
        }
        if (head2 == NULL){
            return head1;
        }
        
        Node *temp1 = head1;
        while (temp1 -> next != NULL){
            temp1 = temp1 -> next;
        }
        temp1 -> next = head2; 
        
        return head1;
        
    }
};