// User function Template for C++

class Solution {
  public:
    vector<int> largestValues(Node* root) {
        // code here
        vector<int> ans;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int> a;
            for(int i=0;i<size;i++){
                Node* temp=q.front();
                q.pop();
                a.push_back(temp->data);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            ans.push_back(*max_element(a.begin(),a.end()));
        }
        return ans;
    }
};