/* Node Structure
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
    int getNode(Node* head, int k) {
        // code here
        int cnt = 1 ;
        
        Node * temp = head;
        
                
        while (temp != NULL && k > 1){
            temp = temp -> next;
            k--;
            
        }
        if (temp == NULL){
        return -1;
        }
        
        return temp -> data;
        
       
        
    }
};