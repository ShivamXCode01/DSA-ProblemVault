/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {

        // Approach - 1 
        // In this approach we uses Stack 
        // Time Complexity - O(n)
        // Space Complexity - O(n) Due to stack

        // We can solve it in Linear Space Complexity
        // Reverse Linked List then Compare the node values 

        if (head == NULL || head->next == NULL) {
            return true;
        }

        ListNode * temp = head;
        stack<int>st;

        while (temp  != NULL){
            st.push(temp -> val);
            temp = temp -> next;
        }
        
        temp = head;

        while (temp != NULL){
            if (st.top() != temp -> val){
                return false;
            }

            st.pop();
            temp = temp -> next;
        }

        return true;

    }
};