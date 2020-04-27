#include<iostream> 
#include<vector>
#include<algorithm>
using namespace std;

//USAGE OF count() ALGORITHM 
int main()
{
  //creating an dynamic varray of type int
  vector <int> arr {10, 20, 0, 30, 60, 70, 0};
  //count(starting range, end range, value to count)
  auto numofzero = count(arr.begin(),arr.end(),0);
  cout<<"\n Number of instances of 0s are "
      <<numofzero;
  //using int as type     
  int Numofzero = count(arr.begin(),arr.end(),10);
  cout<<"\n Number of instances of 10 are "
      <<Numofzero<<endl;
  
  return 0;
}
