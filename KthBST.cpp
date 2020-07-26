// https://leetcode.com/problems/kth-smallest-element-in-a-bst/

class Solution {
public:
    vector<int> v;
    
    void inOrder(TreeNode* root) {
        if(!root) return;
        
        inOrder(root->left);
        v.push_back(root->val);
        inOrder(root->right);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        inOrder(root);
        return v[k-1];
    }
};