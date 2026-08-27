/* Linked List Node Structure
class Node {
public:
    int data;
    Node* next;
    Node(int d) {
        data = d;
        next = nullptr;
    }
};
*/

class Solution {
public:
    Node* arrayToList(vector<int>& arr) {

        Node* head = NULL;
        Node* tail = NULL;

        for (int x : arr) {

            Node* newNode = new Node(x);

            if (head == NULL) {
                head = newNode;
                tail = newNode;
            }
            else {
                tail->next = newNode;
                tail = newNode;
            }
        }

        return head;
    }
};