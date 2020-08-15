//types of iterator

#include<iostream>
#include<vector>
#include<deque>
using namespace std;
int main()
{
  vector<int> vec;
  deque<int> deq( 10, 0);
  
  //using backward_iterator to copy the elements of
  //double ended queue in vector using copy function
  
  copy( deq.begin(), deq.end(), back_insert_iterator<vector <int> >(vec));
  
  //printing the vector
  
  for(auto i = vec.begin(); i != vec.end(); i++)
  cout<<*i;
  return 0;
}
