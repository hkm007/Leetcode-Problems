// https://leetcode.com/problems/two-sum-iv-input-is-a-bst/

class Solution {
public:
    vector<int> nums;
    
    void help(TreeNode* root) {
        if(!root) return;
        
        help(root->left);
        nums.push_back(root->val);
        help(root->right);
    }
    
    bool findTarget(TreeNode* root, int k) {
        if(!root) return false;
        
        help(root);
        
        map<int, int> m;
        for(int i = 0; i < nums.size(); i++) {
            if(m.find(k-nums[i]) != m.end()) return true;
            m[nums[i]] = i;
        }
        return false;
    }
};