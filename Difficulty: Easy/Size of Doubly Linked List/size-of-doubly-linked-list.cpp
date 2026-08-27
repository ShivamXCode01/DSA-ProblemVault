/*
class Node {
  public:

    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};
*/
class Solution {
  public:
    int findSize(Node *head) {
        // Code Here
        if (head == NULL){
            return 0 ;
        }
        
        Node * temp = head;
        int cnt = 1 ;
        
        
        while (temp-> next != NULL){
            temp = temp -> next;
            cnt ++;
        }
        return cnt ;
    }
};