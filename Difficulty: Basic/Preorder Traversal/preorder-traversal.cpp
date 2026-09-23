/* Structure of Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};*/

class Solution {
    private:
        void solve (Node*root, vector<int>&ans){
            
            if (root == NULL){
                return ;
            }
            
            ans.push_back(root -> data);
            solve(root -> left, ans);
            solve(root -> right , ans);
        }
  public:
    vector<int> preOrder(Node* root) {
        // code here
        vector<int>ans;
        
        solve(root , ans);
        
        return ans  ;
    }
};