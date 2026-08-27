/*Struture of the node of the linked list is as:

struct Node {
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

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
    int modularNode(Node *head, int k) {
        // code here
        int size = length(head);
        
        if (head == NULL){
            return -1;
        }
        
        Node * temp = head;
        int result = size % k;
        int s = size - result;
        if (size >= k){
        for (int i = 1 ; i < s ; i++){
            temp = temp -> next;
        }
        // while (temp -> data  != s){
        //     temp = temp -> next;
        // }
        return temp -> data;
        }
        else{
            return -1;
        }
    }
};