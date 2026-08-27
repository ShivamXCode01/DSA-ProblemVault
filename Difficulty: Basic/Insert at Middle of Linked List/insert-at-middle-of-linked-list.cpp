/* Strucutre of a link list node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/


class Solution {
  private:
    int length(Node*head){
        if(head == NULL)
            return 0;
        Node * temp = head;
        int cnt = 0;
        while (temp  != NULL){
            cnt ++;
            temp = temp -> next;
        }
     return cnt;
    }
  public:
    Node *insertInMiddle(Node *head, int x) {
        // code Here
        int size = length(head);
        Node *newNode = new Node (x);
        
        if (head == NULL){
            return newNode;
        }
        
        int middle = (size + 1) / 2 ;
        Node * temp = head ;
        
        
        for (int i = 1; i < middle; i++) {
            temp = temp->next;
        }
        newNode -> next = temp -> next;
        temp -> next = newNode;
        
       return head;
    }
    
};