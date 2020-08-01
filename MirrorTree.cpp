// https://leetcode.com/problems/symmetric-tree/
 
class Solution {
public:
    bool isMirror(TreeNode* root1, TreeNode* root2) {
        if(!root1 && !root2) return true;
        if(!root1 || !root2) return false;
        return (root1->val == root2->val) && isMirror(root1->right, root2->left) && isMirror(root2->right, root1->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        return isMirror(root, root);
    }
};