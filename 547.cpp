class Solution {
public:
    
    void dfs(vector<vector<int> > &graph,int node,vector<int> &visited){
        if(visited[node]==true){
            return;
        }
        else{
            visited[node] = true;
            for(int i=0;i<graph.size();i++){
                if(graph[node][i] == true && visited[i] == false){
                    dfs(graph,i,visited);
                }
            }
        }
        return;
    }
    
    
    int findCircleNum(vector<vector<int>>& M) {
        vector<int> isvisited(M.size(),0);
        int count = 0;
        for(int i=0;i<M.size();i++){
            if(isvisited[i] == false){
                count++;
                dfs(M,i,isvisited);
            }
        }
        return count;
    }
};