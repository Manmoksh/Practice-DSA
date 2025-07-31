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

    int check(TreeNode* node,bool &valid){
        if(!node) return 0;
        int l=check(node->left,valid);
        int r=check(node->right,valid);
        if(abs(l-r)>1) {
            valid=0;        
        }
        return 1+max(l,r);
    }
    bool isBalanced(TreeNode* root) {
        bool valid=1;
        check(root,valid);
        return valid;
    }
};