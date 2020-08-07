#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
  cout<<"Working Of Find Algorithm "<<endl;
  char ch[] = " Z3R0 is possible ";
  int len = strlen(ch);
  
  char *where = find( &ch[0], &ch[len],'0');
  //we would have used find(ch.begin(),ch.end(),'0')
  //only if we could be working with STL container
  //sinve array is not a stl container therefore we've defined 
  //beginning and end point as &ch[0] and &ch[len]
  if( *where == '0')
  {
    cout<<"Found"<<endl;
  }
}
