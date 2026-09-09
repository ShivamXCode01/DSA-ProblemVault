/* Structure of linked list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};*/

class myStack {
private:
    Node* head;

public:
    myStack() {
        head = NULL;
    }

    bool isEmpty() {
        return head == NULL;
    }

    void push(int x) {
        Node* newNode = new Node(x);

        newNode->next = head;
        head = newNode;
    }

    void pop() {
        if (head == NULL) {
            return;
        }

        Node* temp = head;
        head = head->next;

        delete temp;
    }

    int peek() {
        if (head == NULL) {
            return -1;
        }

        return head->data;
    }

    int size() {
        int cnt = 0;

        Node* temp = head;

        while (temp != NULL) {
            cnt++;
            temp = temp->next;
        }

        return cnt;
    }
};