/* Definition of a Linked List Node
class Node
{
  public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};*/

class Solution {
  public:
    Node* sortedInsert(Node* head, int key) {
        // code here
        Node * newNode = new Node (key);
        while (head == NULL){
            return newNode;
        }
        if (key <= head->data) {
            newNode->next = head;
            return newNode;
        }
        Node * temp = head;
        
        while (temp -> next != NULL && temp ->next -> data < key){
            temp = temp -> next;
        }
        newNode -> next = temp -> next;
        temp -> next = newNode;
        
        return head;
    }
};