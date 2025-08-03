class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int,vector<int>> adj(numCourses);
        queue<int> q;
        vector<int> indegree(numCourses,0);
        int ans=0;
        for(auto i:prerequisites){
            int v=i[0];
            int u=i[1];
            adj[u].push_back(v);
        }
        for(int i=0;i<numCourses;i++){
            for(int v:adj[i]) indegree[v]++;
        }
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0) {
                q.push(i);
                ans++;    
            }
        }
        while(!q.empty()){
            int u=q.front();
            q.pop();
            for(int v:adj[u]){
                indegree[v]--;
                if(!indegree[v]) {
                    q.push(v);
                    ans++;
                }
            }
        }

        return (numCourses==ans? 1:0);
    }
};