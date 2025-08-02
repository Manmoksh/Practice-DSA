class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int,vector<int>> adj(numCourses);
        vector<int> ans;
        vector<int> indegree(numCourses,0);
        queue<int> q;
     
        for(int i=0;i<prerequisites.size();i++){
            int u=prerequisites[i][1];
            int v=prerequisites[i][0];
            adj[u].push_back(v);
        }
        for(int i=0;i<numCourses;i++){
            for(int v:adj[i]) indegree[v]++;
        }
        for(int u=0;u<numCourses;u++){
            if(!indegree[u]) {
                q.push(u);
                
            }
        }
        while(!q.empty()){
            int u=q.front();
            q.pop();
            ans.push_back(u);
            for(int v:adj[u]){
                indegree[v]--;
                if(!indegree[v]){
                q.push(v);
             
                } 
            }
        }
        if(ans.size()==numCourses) return ans;

        return {};


    }
};