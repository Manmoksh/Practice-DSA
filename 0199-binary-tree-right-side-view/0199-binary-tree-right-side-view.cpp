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
    void helper(TreeNode* node,vector<int> &a,int level=0){
        if(!node)return;
        if(level==a.size()) a.push_back(node->val);
        helper(node->right,a,level+1);
        helper(node->left,a,level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        helper(root,ans);
        return ans;
    }
};