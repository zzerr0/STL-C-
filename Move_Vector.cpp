#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int main( ) {
  
  vector <int> g1 = { 10, 20, 30, 40, 50 };
  vector <int> g2 = { 100, 200, 300, 400, 500 };
  
  for (auto i = g1.begin(); i != g1.end(); ++i) 

        cout << *i << " "; 
        cout<<endl;

  g1 = g2;
  
  for (auto i = g1.begin(); i != g1.end(); ++i) 

        cout << *i << " "; 

  g2 = move(g1);
  
  cout<<g1.size();

  
}
