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
    bool findTarget(TreeNode* root, int k) {
        unordered_map<int, int> m;
        stack<TreeNode*> st;
        if(root==NULL) return false;
        st.push(root);
        while(!st.empty()){
            root = st.top();
            st.pop();
            if(m.count(k-root->val)){
                return true;
            }
            m[root->val] = 0;
            if(root->right) st.push(root->right);
            if(root->left) st.push(root->left);
        }
            
        return false;
    }
};