class Solution {
  public:
    bool DFSCycle(int node,unordered_map<int,vector<int>> &adj,vector<bool> &path,vector<bool> &vis){
        vis[node]=1;
        path[node]=1;
        for(int v:adj[node]){
            if(!vis[v] && DFSCycle(v,adj,path,vis)) return 1;
            else if(path[v]) return 1;
        }
        path[node]=0;
        return 0;
    }
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        unordered_map<int,vector<int>> adj(V);
        vector<bool> vis(V,0);
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
        }
        for(int i=0;i<V;i++){
            vector<bool> path(V,0);
            if(!vis[i] && DFSCycle(i,adj,path,vis)) return 1;
        }
        return 0;
        
        
    }
};