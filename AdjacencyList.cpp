#include <iostream>
#include <vector>
using namespace std;

void addEdge ( vector <int> graph[], int u, int v){
 graph[u].push_back(v);
}
int main(){
 cout<<"Enter the number of edged "<<endl;
 int n;
 cin>>n;
 vector<int> graph[n];
 addEdge(graph, 0, 1 );
 addEdge(graph, 0, 2 );
 addEdge(graph, 0, 3 );
 addEdge(graph, 1, 2 );
 addEdge(graph, 1, 3 );
 addEdge(graph, 2, 1 );
 addEdge(graph, 2, 2 );
 addEdge(graph, 3, 0 );
 addEdge(graph, 3, 1 );
 addEdge(graph, 3, 2 );
 
 for( int i = 0; i < n; i++ ){
  cout<<i<<" --> ";
  for( int  j = 0; j < n; j++ ){
   cout<<graph[i][j]<<" ";
  }
  cout<<endl;
 }
 
return 0;
}
