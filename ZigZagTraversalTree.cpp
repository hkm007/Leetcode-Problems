// https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(!root) return res;
        
        queue<TreeNode*> q;
        q.push(root);
        int lev = 1;
        while(!q.empty()) {
            int count = q.size();
            vector<int> v;
            
            while(count) {
                TreeNode* temp = q.front();
                q.pop();
                if(lev%2 != 0) v.push_back(temp->val);
                else v.insert(v.begin(), temp->val);
                
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                count--;
            }
            lev++;
            res.push_back(v);
        }
        
        return res;
    }
};