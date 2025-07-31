/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Should return  right view of tree
class Solution {
  public:
    // Function to return list containing elements of right view of binary tree.
    void helper(vector<int> &a,Node* node,int level=0){
        if(!node) return;
        if(level==a.size()) a.push_back(node->data);
        helper(a,node->right,level+1);
        helper(a,node->left,level+1);
    }
    vector<int> rightView(Node *root) {
        // Your Code here
        vector<int> ans;
        helper(ans,root);
        return ans;
    }
};