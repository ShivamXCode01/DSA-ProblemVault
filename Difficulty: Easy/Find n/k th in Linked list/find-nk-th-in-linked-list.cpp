/* Structure of a Linked List Node
class Node
{
public:
    int data;
    struct Node *next;
    Node(int x){
        data = x;
        next = nullptr;
    }
}; */
#include <cmath>
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
    int fractionalNode(Node *head, int k) {
        // your code here
        int size = length(head);
        int n = ceil((double)size / k) ;
        
        int cnt = 1; 
        Node * temp = head;
        while (temp -> next != NULL && cnt < n){
            temp = temp -> next ;
            cnt ++;
        }
            return temp -> data;
    }
};