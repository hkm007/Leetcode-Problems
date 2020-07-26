// https://leetcode.com/problems/validate-binary-search-tree/

class Solution {
public:
    vector<int> v;
    
    void inorder(TreeNode* root) {
        if(!root) return;
        
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    
    bool isValidBST(TreeNode* root) {
        inorder(root);
        if(v.size() < 2) return true;
        for(int i = 0; i < v.size()-1; i++) if(v[i] >= v[i+1]) return false;
        return true;
    }
};