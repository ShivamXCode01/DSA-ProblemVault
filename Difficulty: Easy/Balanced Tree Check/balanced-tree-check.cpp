/* Structure of binary tree node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/


class Solution {
private:
    pair<bool, int> isBalancedFast(Node* root) {

        if (root == NULL) {
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }

        pair<bool, int> left = isBalancedFast(root->left);
        pair<bool, int> right = isBalancedFast(root->right);

        bool leftAns = left.first;
        bool rightAns = right.first;

        bool diff = abs(left.second - right.second) <= 1;

        pair<bool, int> ans;

        ans.second = max(left.second, right.second) + 1;

        if (leftAns && rightAns && diff) {
            ans.first = true;
        }
        else {
            ans.first = false;
        }

        return ans;
    }

public:
    bool isBalanced(Node* root) {

        pair<bool, int> ans = isBalancedFast(root);

        return ans.first;
    }
};

//Approach - 1 brute Force
// Time Complexity - O(n2)
// Space Complexity - O(1);

// class Solution {
//   private:
//     int height (Node * root){
        
//         if (root == NULL){
//             return 0;
//         }
//         int ans = max(height(root -> left) , height(root -> right)) + 1;
        
//         return ans;
//     }

//   public:
//     bool isBalanced(Node* root) {
//         // code here
//         if (root == NULL){
//             return true;
//         }
        
//         bool left = isBalanced(root -> left);
//         bool right = isBalanced(root -> right);
        
//         bool diff = abs(height(root-> left) - height(root -> right)) <= 1;
        
//         if (left && right && diff){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };

