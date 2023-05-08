/*II. Given a graph, design an algorithm and implement it using a program to find if a graph is
bipartite or not. (Hint: use BFS)
Input Format:
Input will be the graph in the form of adjacency matrix or adjacency list.
Output Format:
Output will be 'Yes Bipartite' if graph is bipartite, otherwise print 'Not Bipartite'.*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class graph
{
    map<int,list<int>>adj;
    public:
        void addedge(int u,int v)
        {
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        void dfs_helper(int source,map<int,bool>&visited)
        {
            cout<<source;       //recurssive func.that will traverse the graph
            visited[source]=true;
            for(int i:adj[source])  //go to all the neighbours of node that are not visited
            {
                if(!visited[i])
                {
                    dfs_helper(i,visited);
                }
            }
        }
        void dfs(int source)
        {
            map<int,bool>visited;
           for(auto i:adj)
           {
               int node=i.first;
               visited[node]=1;
           }
           dfs_helper(source,visited);
        }
        void print()
        {
            for(auto i:adj)
            {
                cout<<i.first<<endl;
                // for(auto j:i.second)
                // {
                //     cout<<j<<" ,";
                // }
                // cout<<endl;
            }
        }
};
int main()
{
    int n,m;
   cout<<"Enter the no. of nodes :";
   cin>>n;
   cout<<"Enter the no. of edges :";
   cin>>m;
   graph g;
   int u,v;
   for(int i=0;i<m;i++)
   {
       cin>>u>>v;
       g.addedge(u,v);
   }
   g.dfs(0);
   g.print();
    return 0;
}