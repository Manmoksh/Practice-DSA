class Solution {
  public:
    
    
    void DFS(int node,unordered_map<int,vector<int>> &adj,stack<int> &st,vector<bool> &vis){
        vis[node]=1;
        for(int v:adj[node]){
            if(!vis[v] ) DFS(v,adj,st,vis);

        } 
        st.push(node);
    }
    
    
    
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        unordered_map<int,vector<int>> adj(V);
        vector<bool> vis(V,0);
        stack<int> st;
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
        }
        for(int i=0;i<V;i++){
            if(!vis[i]){
                DFS(i,adj,st,vis);
            }
        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};