//implementing queue container adaptor with linked list

#include <iostream>
#include <queue>
#include <list>
using namespace std;

int main()
{
  int n = 10;
  int arr[n];
  
  for( int i = 0; i < n; i++)
  {
    arr[i] = i;
  }
  
 // declaring queue with list
 priority_queue < int > pq;
 cout<<"The size of queue is "<<pq.size()<<endl;
 
 //pushing elements into the stack
 for ( int i = 0; i < n; i++) 
 {
   pq.push( arr[i] );
 }
 cout<<"The size of queue is "<<pq.size()<<endl;
 cout<<"Front element of queue is "<<pq.top();
 cout<<" Poping Element from queue pop front "<<endl;
 for( int i = 0; i < n; i++)
 {
   cout<<" Front -> "<<pq.top()<<endl;
   pq.pop();
 }
 cout<<"The size of queue is "<<pq.size()<<endl;
 
 return 0;
}
