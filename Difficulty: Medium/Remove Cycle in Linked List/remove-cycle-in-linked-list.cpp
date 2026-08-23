/* Structure of Linked List Node
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
      Node* detectLoop(Node* head) {
           if (head == NULL) {
               return NULL;
           }

           Node* slow = head;
           Node* fast = head;

           while (fast != NULL && fast->next != NULL) {
               slow = slow->next;
               fast = fast->next->next;

               if (slow == fast) {
                   return slow;
               }
           }

           return NULL;
       }
    private:
      Node* cycleStart(Node* head) {
          // code here
          if (head == NULL){
              return NULL;
          }
          Node * intersection = detectLoop(head);
          // If there is no loop in LL
          if (intersection == NULL) {
              return NULL;
          }
          Node * slow = head ;
          while (slow != intersection){
              slow = slow -> next;
              intersection = intersection -> next;
          }
          return slow ;
      }
  public:
    void removeLoop(Node* head) {
        // code here
        if (head== NULL){
            return ;
        }
        
        Node *startLoop = cycleStart(head);
        if (startLoop == NULL){
            return ;
        }
        Node * temp = startLoop;
        while (temp -> next != startLoop){
            temp = temp -> next;
        }
        temp ->next = NULL;
    }
};