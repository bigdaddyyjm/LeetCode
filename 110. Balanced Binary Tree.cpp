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
    bool isBalanced(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        if(abs(help(root->left)-help(root->right)) > 1){
            return false;
        } else {
            return isBalanced(root->left) && isBalanced(root->right);
        }
    }
    
    int help(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int height = 1;
        height += max(help(root->left),help(root->right));
        return height;
    }
};