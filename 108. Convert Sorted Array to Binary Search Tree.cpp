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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int k = nums.size();
        if(k>0){
            TreeNode* root = new TreeNode(0);
            root->val = nums[k/2];
            vector<int> left={}; //vector<int> left(num.begin(), num.begin()+middle);
            vector<int> right={}; //vector<int> right(num.begin()+middle+1, num.end());
            for(int i = 0; i < k/2; i++){ 
                left.push_back(nums[i]);
            }
            for(int j = k/2+1; j < k; j++){
                right.push_back(nums[j]);
            }
            root->left = sortedArrayToBST(left);
            root->right = sortedArrayToBST(right);
            return root;
        } else {
            return NULL;
        }
    }
};