/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
      private:
        int length(Node *head){
            if (head == NULL){
                return 0;
            }
            Node *temp = head;
            int cnt = 1 ;
        while (temp -> next != NULL){
            cnt ++;
            temp  = temp -> next;
        }
        return cnt ;
        }
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        int n = length(head);
        int x = (n-k)+1;
        
        if (k > n){
            return -1 ;
        }
        
        Node *temp = head;
        for (int i = 1 ; i <=x ; i++ ){
            if (i == x){
               return  temp -> data;
            }
            temp = temp -> next;
        }
    }
};