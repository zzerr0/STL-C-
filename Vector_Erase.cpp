#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  int n, el;
  cin>>n;
  vector <int> vec;
  for( int i = 0; i < n; i++){
    cin>>el;
    vec.push_back(el);
  }
  
  int x, a, b;
  cin>>x;
  vec.erase(vec.begin()+x-1);
  
  cin>>a>>b;
  vec.erase(vec.begin()+a-1,vec.begin()+b-1);
  
  cout<<vec.size()<<endl;
  vector <int> :: iterator it;
  for( it = vec.begin(); it != vec.end(); it++){
   cout<<*it<<" ";
  }
}
