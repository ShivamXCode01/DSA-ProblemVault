/* Structure of link list node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};*/

class Solution {
  public:
    bool isEven(Node* head) {
        // code here
        Node *temp = head ;
        int cnt = 0; 
        
        while (temp != NULL){
            cnt ++;
            temp = temp -> next;
        }
        
        if (cnt % 2 == 0){
            return true;
        }
        return false;
        
    }
};