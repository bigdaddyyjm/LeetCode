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
    vector<vector<int>> res;
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        help(root,0);
        return vector<vector<int>>(res.rbegin(),res.rend());
    }
    
    void help(TreeNode* root, int depth){
        if(!root) return;
        if(res.size() == depth){
            res.push_back(vector<int>());
        }
        res[depth].push_back(root->val);
        help(root->left,depth+1);
        help(root->right,depth+1);
    }
};