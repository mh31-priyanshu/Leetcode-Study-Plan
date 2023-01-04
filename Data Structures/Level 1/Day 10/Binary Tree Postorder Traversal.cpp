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

// This solution i've solved using recursion but soon going to uppload iterative solution :)


class Solution {
    vector<int> result;
public:
    vector<int> postorderTraversal(TreeNode* root) {
        if(!root)   return result;
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        result.push_back(root->val);
        return result;
    }
};