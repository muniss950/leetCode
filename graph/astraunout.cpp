#include<bits/stdc++.h>
#include <ostream>
using namespace std;

class Graph{
  public:
  int V;
  list<int>*l;
    Graph(int v){
      V=v;
      l=new list<int>[V];
    }
    void addEdge(int i,int j,bool undir=true){
      l[i].push_back(j);
      if(undir){
        l[j].push_back(i);
      }
    }
    void printAdjList(){
      for(int i=0;i<V;i++){
        cout<<i<<"-->";
        for(auto node:l[i]){
            cout<<node<<",";
        }
        cout<<endl;
        
      }
    }
    void bfs(int source){
      queue<int>q;
      bool *visited=new bool[V]{0};
      q.push(source);
      visited[source]=true;
      while(!q.empty()){
        int f=q.front();
        cout<<f<<endl;
        q.pop();
        for(auto nbr:l[f]){
          if(!visited[nbr]){
            q.push(nbr);
            visited[nbr]=true;
          }
        }
      }
    }
    void dfsHelper(int node,bool *visited){
      visited[node]=true;
      cout<<node<<",";
      for(int nbr: l[node]){
        if(!visited[nbr]){
          dfsHelper(nbr,visited);
        }
      }
      return;
    }
    void dfs(int source){
      bool *visited=new bool[V]{0};
      dfsHelper(source,visited);
    }
};

int count_pairs(int n, vector<pair<int,int> > astronauts){
   Graph g(5); 
   g.addEdge(0,1);
   g.addEdge(0,4);
   g.addEdge(2,3);
   g.bfs(0);
   for(auto i:*g.l){
     cout<<i<<endl;
   }
   return 0;
}
int main(){
   Graph g(5); 
   g.addEdge(0,1);
   g.addEdge(0,4);
   g.addEdge(2,3);
   // g.dfs(0);
   g.printAdjList();

}
