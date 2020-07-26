// https://leetcode.com/problems/second-minimum-node-in-a-binary-tree/

class Solution {
public:
    set<int> s;
    
    void helperTrav(TreeNode* root) {
        if(!root) return;
        
        helperTrav(root->left);
        s.insert(root->val);
        helperTrav(root->right);
    }
    
    int findSecondMinimumValue(TreeNode* root) {
        helperTrav(root);
        
        if(s.size() < 2) return -1;
        set<int>::iterator it = s.begin();
        advance(it, 1);
        return *it;
    }
};