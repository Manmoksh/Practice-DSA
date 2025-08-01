class Solution {
    void dfs(int node,vector<vector<int>> &adj,vector<int> &vis,int n){
        vis[node]=1;
        for(int i=0;i<n;i++){
            if(adj[node][i] && !vis[i]){
                vis[i]=1;
                dfs(i,adj,vis,n);
            }
        }

    }
public:

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int> vis(n+1,0);
        int ans=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i,isConnected,vis,n);
                ans++;
            }
        }
        return ans;

    }
};