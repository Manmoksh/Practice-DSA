class Solution {
  public:
    bool checkDFSCycle(unordered_map<int,vector<int>> &adj,vector<bool> &vis,int u,int parent){
        vis[u]=1;
        for(int v:adj[u]){
            if(v==parent ) continue;
            if(vis[v] ) return 1;
            if(checkDFSCycle(adj,vis,v,u)) return 1;
        }
        return 0;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        unordered_map<int,vector<int>> adj(V);
        vector<bool> vis(V,0);
        for(auto i:edges){
            int u=i[0];
            int v=i[1];
            adj[u].push_back(v);
            
            adj[v].push_back(u);
        }
        for(int u=0;u<V;u++){
            if(!vis[u] && checkDFSCycle(adj,vis,u,-1) )
            return 1 ;
        }
        return 0;
        
    }
};