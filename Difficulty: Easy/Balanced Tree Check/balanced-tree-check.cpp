/* A binary tree node structure

class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
 */

class Solution {
    int check(Node* node,bool &valid){
        if(!node ||!valid) return 0;
        int l=check(node->left,valid);
        int r=check(node->right,valid);
        if(abs(l-r)>1) valid=0;
        return 1+max(l,r);
    }
  public:
    bool isBalanced(Node* root) {
        // Code here
        bool valid=1;
        check(root,valid);
        return valid;
    }
};