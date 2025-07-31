/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
  void helper(vector<int> &a,Node *node,int level=0){
      if(!node) return;
      if(level==a.size())  a.push_back(node->data);
      helper(a,node->left,level+1);
      helper(a,node->right,level+1);
  }
    vector<int> leftView(Node *root) {
        // code here
        vector<int> ans;
        helper(ans,root);
        return ans;
        
    }
};