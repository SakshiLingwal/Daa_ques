//graph (adj. list) creation
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class graph
{
    public:
        unordered_map<int,list<int>>adj;
        void addedge(int u,int v,bool status)   //status = 0->undirected,status =1->directed
        {
            //create an edge from u to v
            adj[u].push_back(v);
            if(status==0)
            {
                adj[v].push_back(u);    //means graph is undirected & edge can be on both sides u->v || v->u
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
       g.addedge(u,v,0);
   }
   g.print();
    return 0;
}
