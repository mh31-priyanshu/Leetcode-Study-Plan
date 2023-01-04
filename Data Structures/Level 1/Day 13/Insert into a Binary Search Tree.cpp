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
#define COUNT 10
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* ans = root;
        TreeNode* prev = NULL;
        TreeNode* node = new TreeNode(val);
        if(root == NULL) return node;
        while(root){
            if(root->val>val){
                prev = root;
                root = root->left;
            }else{
                prev = root;
                root =  root->right;
            }
        }
        if(prev->val>val){
            prev->left = node;
        }else{
            prev->right = node;
        }
        return ans;
    }
};