// https://leetcode.com/problems/binary-tree-inorder-traversal/

class Solution {
public:
    vector<int> v;
    
    void inOrder(TreeNode* root) {
        if(!root) return;
        
        inOrder(root->left);
        v.push_back(root->val);
        inOrder(root->right);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        inOrder(root);
        return v;
    }
};