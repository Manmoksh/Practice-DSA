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
    void helper(vector<int> &a,TreeNode* node){
        if(!node) return;
        a.push_back(node->val);
        helper(a,node->left);
        helper(a,node->right);
    }    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        helper(ans,root);
        return ans;
    }
};