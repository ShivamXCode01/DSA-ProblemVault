/*
struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }

};
*/

class Solution {
  public:
    int getLength(Node *head) {
        // code here
        Node * temp = head ;
      
        if (head == NULL)
            return 0 ;
           
        int cnt = 1;
        
        while (temp->next != head){
            cnt ++;
            temp = temp -> next;
        }
        
        return cnt ;
    }
    
};