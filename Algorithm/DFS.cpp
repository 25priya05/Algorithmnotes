// IN THIS WE WILL LEARN ABOUT THE DFS
//IN DFS WE ARE USING THE DATA STRUCTURE STACK
//AND WE FIND THE LENGTH OF TREE  IN A GRAPH
//and we have to backtrack to check the node  is visited or not 
//once we visited the node we cannot go further on that node
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class graph
{
    private:
    int V;
    list<int>*adj;
    public:
    graph(int V);
    void addedge(int v,int w);
    void dfs(int v);
    void DFSutil(int v,unordered_set<int>visited);
};
graph::graph(int V)
{
    this->V = V;
    adj = new list<int>[V];

}
void graph::addedge(int v,int w)
{
    adj[v].push_back(w);

}
void graph::dfs(int v)
{
    unordered_set<int> visited;
    DFSutil( v,visited);
}
void graph::DFSutil(int v,unordered_set<int>visited)
{
    visited.insert(v);
    cout<<v<<" ";
    for(int neighbor : adj[v])
    {
        if(visited.find(neighbor)== visited.end())
        {
            DFSutil(neighbor,visited);
        }
    }
}
int main(int argc, char const *argv[])
{
    graph g(6);
    // Add edges
    g.addedge(0, 1);
    g.addedge(0, 2);
    g.addedge(1, 3);
    g.addedge(1, 4);
    g.addedge(2, 5);
    cout << "Depth First Traversal (starting from vertex 0): ";
    g.dfs(0);
    return 0;
}