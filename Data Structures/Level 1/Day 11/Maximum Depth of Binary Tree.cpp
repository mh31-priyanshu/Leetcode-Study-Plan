/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        if(root->left == NULL && root->right == NULL)
            return 1;
        if(root->left != NULL && root->right == NULL)
            return maxDepth(root->left) + 1;
        if(root->right != NULL && root->left == NULL)
            return maxDepth(root->right) + 1;
        if(root->right != NULL && root->left != NULL) {
            int leftdepth = maxDepth(root->left);
            int rightdepth = maxDepth(root->right);
            return leftdepth > rightdepth ? leftdepth + 1 : rightdepth + 1;
        }
        return 0;
    }
};