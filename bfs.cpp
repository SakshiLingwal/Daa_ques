/*I. Given a (directed/undirected) graph, design an algorithm and implement it using a program to find if a path exists between 
two given vertices or not. (Hint: use DFS)
Input Format:
Input will be the graph in the form of adjacency matrix or adjacency list.
Source vertex number and destination vertex number is also provided as an input.
Output Format:
Output will be 'Yes Path Exists' if path exists, otherwise print 'No Such Path Exists'.*/
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
        void bfs(int source)
        {
            map<int,int>visited;
            queue<int>q;
            q.push(source);
            visited[source]=1;
            while(!q.empty())
            {
                int node=q.front();
                cout<<node<<" ";
                q.pop();
                for(int i:adj[node])
                {
                    if(!visited[i])
                    {
                        q.push(i);
                        visited[i]=1;
                    }
                }
            }
        }
        void print()
        {
            for(auto i:adj)
            {
                cout<<i.first<<"->";
                for(auto j:i.second)
                {
                    cout<<j<<" ,";
                }
                cout<<endl;
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
   g.print();
    return 0;
}