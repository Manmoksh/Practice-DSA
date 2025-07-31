/* The Node structure is
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution {
  public:
    /*You are required to complete this method*/
    int maxDepth(Node *root) {
        // Your code here
        if(!root) return 0;
        return 1+max(maxDepth(root->left),maxDepth(root->right));
    }
};
