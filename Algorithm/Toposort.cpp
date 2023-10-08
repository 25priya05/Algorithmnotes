//toposort
//give a Dag with v vertices and E edges ,find any topoligical sorting of that graph
//topological sorting only exists in dag .if the nodes of a graph are connected through directed edges and the graph does not contain a cycle dag
//The topological sorting of a directed acyclic graph is nothing but the linear ordering of vertices such that if there is an edge between node u and v(u -> v), node u appears before v in that ordering
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution
{
    private:
    void dfs(int node,int visited[],vector<int> adj[],stack<int>& st)
    {
         visited[node] = 1;
         for(int it : adj[node])
         {
            if(!visited[it])
            
                dfs(it,visited,adj,st);
            
         }
         st.push(node);
    }
    public:
    vector<int> topoSort(int V,vector<int>adj[])
    {
        int visited[V] = {0};
        stack<int>st;
        for(int i = 0;i<V;i++)
        {
            if(!visited[i])
            dfs(i,visited,adj,st);
        }
        vector<int>ans;
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
     return ans;

    }
};
int main(int argc, char const *argv[])
{
    vector<int> adj[6] = {{}, {}, {3}, {1}, {0, 1}, {0, 2}};
	int V = 6;
	Solution obj;
	vector<int> ans = obj.topoSort(V, adj);

	for (auto node : ans) {
		cout << node << " ";
	}
	cout << endl;
    return 0;
}
