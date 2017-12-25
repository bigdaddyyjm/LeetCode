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
    int minDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        int depth = 1;
        if(root->left != NULL && root->right != NULL){
            depth += min(minDepth(root->left),minDepth(root->right));
        } else if(root->left != NULL && root->right == NULL){
            depth += minDepth(root->left);
        } else if(root->left == NULL && root->right != NULL){
            depth += minDepth(root->right);
        }
        return depth;
    }
};