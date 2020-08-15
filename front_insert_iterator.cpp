//types of iterator

#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<deque>
using namespace std;
int main()
{
  deque<int> vec;
  deque<int> deq;
  int arr[10] = {01};
  for(int i=0;i<10;i++)
  cout<<arr[i]<<endl;
  //using backward_iterator to copy the elements of
  //double ended queue in vector using copy function
  
  //copy( deq.begin(), deq.end(), front_insert_iterator<deque <int> >(vec));
             //or
  //for below code we've to use generic function
 // copy( deq.begin(), deq.end(), back_insert(vec));
  
  //printing the vector
  
  //for(auto i = vec.begin(); i != vec.end(); i++)
 // cout<<*i;
  cout<<endl;
  //copying from an array
  copy( &arr[0], &arr[10], front_insert_iterator<deque<int> >(deq));
  
  for(auto i = deq.begin(); i != deq.end(); i++)
  cout<<*i;
  return 0;
}
