/*
// Tree Node
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
  public:
    // Function to return a list containing the inorder traversal of the tree.
    void traverse(vector<int> &a,Node *node){
        if(node==NULL) return;
        traverse(a,node->left);
        a.push_back(node->data);
        traverse(a,node->right);
        
    }
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int> ans;
        
        
        traverse(ans,root);
        return ans;
    }
};