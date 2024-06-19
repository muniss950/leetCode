#include "adjacentList.h"
#include <bits/stdc++.h>
using namespace std;

// int main(){
//
// }

int main(){
  Graph g(6);
  g.addEdge(0, 1);
  g.addEdge(0, 4);
  g.addEdge(2, 1);
  g.addEdge(3, 4);
  g.addEdge(4, 5);
  g.addEdge(2, 3);
  g.addEdge(3, 5);
  g.printAdjList();
}
