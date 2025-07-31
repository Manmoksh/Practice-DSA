/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */
void helper(Node* node,vector<int> &a){
    if(!node) return;
    if(!node->right && node->left) a.push_back(node->left->data);
    
    
    
    
    else if(node->right && !node->left) a.push_back(node->right->data);
    helper(node->left,a);
    helper(node->right,a);
    
}
vector<int> noSibling(Node* node) {
    // code here
    vector<int> ans;
    helper(node,ans);
    if (ans.empty()) ans.push_back(-1);
    sort(ans.begin(),ans.end());
    return ans;

    
}