#include<iostream>
#include<cstring>
#include<cassert>
#include<algorithm>
using namespace std;
int main()
{
  //using reverse() generic algorithm 
  
  string str = "shivam";
  //using reverse() algorithm with string
  reverse(str.begin(), str.end());
  
  assert( str == "mavihs");
  cout<<"--Best--"<<endl;
  
  char arr[] = "papa";
  int len = strlen(arr);
  
  reverse( &arr[0], &arr[len]);
  assert( string(arr) == "apap");
  //if it fails it shows the failed message
  cout<<"--Best--"<<endl;
  
}
