/* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        // Your code here
        
        queue<Node*> q;
        q.push(root);
        vector<vector<int>> ans;
        while(!q.empty()){
            vector<int> a;
            Node* temp=q.front();
            q.pop();
            a.push_back(temp->data);
            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
            ans.push_back(a);
        }
        return ans;
    }
};