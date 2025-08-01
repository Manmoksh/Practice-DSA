class Solution {
  public:
    void dfs(vector<int> &a,vector<vector<int>> &adj,int node,int vis[]){
        vis[node]=1;
        a.push_back(node);
        for(int i:adj[node]){
            if(!vis[i])
            dfs(a,adj,i,vis);
        }
        
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int n=adj.size();
        int vis[n]={0};
        vector<int> ans;
        dfs(ans,adj,0,vis);
    
        return ans;
       
        
    }
};