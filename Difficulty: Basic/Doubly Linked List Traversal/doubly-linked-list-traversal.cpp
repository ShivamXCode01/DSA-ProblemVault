/* Structure of doubly linked list Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};*/
class Solution {
  public:
    vector<vector<int>> displayList(Node *head) {
        // code here
        vector<int>forward;
        vector<int>backward;
        vector<vector<int>>result;
        
        if (head == NULL){
            return {};
        }
        Node *temp = head;
        
        // Forward traversal
        while (temp != NULL) {
            forward.push_back(temp->data);

            if (temp->next == NULL) {
                break;
            }

            temp = temp->next;
        }

        // Backward traversal
        while (temp != NULL) {
            backward.push_back(temp->data);
            temp = temp->prev;
        }
        
        
        result.push_back(forward);
        result.push_back(backward);
        
        return result;
        
    }
};