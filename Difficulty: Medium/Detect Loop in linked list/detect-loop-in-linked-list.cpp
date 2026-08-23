/*
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
} */
#include <map>
class Solution {
  public:
    bool detectLoop(Node* head) {
        // code here
        if (head == NULL){
            return false;
        }
        
        map <Node*,bool>visited;
        
        Node * temp = head;
        
        while (temp != NULL){
            if (visited[temp]== true){
                return true;
            }
            visited[temp] = true;
            temp = temp -> next;
        }
        
        return false;
        
    }
};