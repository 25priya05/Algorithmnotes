// c++ program for solution of M
//coloring problem using backtracking
//graph coloring refers to the problem of coloring vertices of a graph in  such a way that no two adjacent nodes have same color.
//this is called the vertex coloring  problem .if coloring is done using at most m colors ,it is called m-coloring
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define V 4
void  printsolution(int color[]);

bool issafe(int v,bool graph[V][V],int color[],int c)
{
    for(int i = 0;i < V; i++)
    {
        if(graph[v][i] && c==color[i])
        return false;

        return true;
    }
}
bool graphcoloringutil(bool graph[V][V],int m,int color[],int v)
{
    if(v==V)
    {
        return true;

    }
    for(int c = 1;c<=m;c++){
    
    if (issafe(v, graph, color, c)) {
            color[v] = c;
        if(graphcoloringutil(graph,m,color,v+1)==true)
        return true;
        color[v] = 0;
        }
    }
    return false;
    
}
bool graphcoloring(bool graph[V][V],int m)
{
    int color[V];
    for(int i = 0;i<V;i++)
    
        color[i] = 0;
        if(graphcoloringutil(graph,m,color,0) == false)
        {
            cout<<"solution does not exist";
        }
        printsolution(color);
        return true;

    
}
void printsolution(int color[])
{
    cout << "Solution Exists:"
         << " Following are the assigned colors"
         << "\n";
    for (int i = 0; i < V; i++)
        cout << " " << color[i] << " ";
 
    cout << "\n";
}
int main()
{
      bool graph[V][V] = {
        { 0, 1, 1, 1 },
        { 1, 0, 1, 0 },
        { 1, 1, 0, 1 },
        { 1, 0, 1, 0 },
    };
 
    // Number of colors
    int m = 3;
 
    // Function call
    graphcoloring(graph, m);
    return 0;
}