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
    bool isSymmetric(TreeNode* root) {
        if(root == NULL){
            return true;
        } else return compareTwo(root->left,root->right);
    }
    
    bool compareTwo(TreeNode* p, TreeNode* q){
        if(p == NULL && q == NULL){
            return true;
        } else if(p != NULL && q != NULL){
            return (p->val == q->val) && compareTwo(p->left,q->right) && compareTwo(p->right,q->left);
        } else {
            return false;
        }
    }
};
