/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return vector<vector<int>>();
        queue<TreeNode*> queue;
        queue.push(root);
        vector<vector<int>> res;
        while(!queue.empty()){
            int k = queue.size();
            vector<int> row;
            for(int i = 0; i < k; i++){
                TreeNode* tmp = queue.front();
                row.push_back(tmp->val);
                if(tmp->left) queue.push(tmp->left);
                if(tmp->right) queue.push(tmp->right);
                queue.pop();
            }
            res.push_back(row);
        }
        return res;
    }
};