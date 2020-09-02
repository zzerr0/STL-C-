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
 queue < int, list<int> > mq;
 cout<<"The size of queue is "<<mq.size()<<endl;
 
 //pushing elements into the stack
 for ( int i = 0; i < n; i++) 
 {
   mq.push( arr[i] );
 }
 cout<<"The size of queue is "<<mq.size()<<endl;
 cout<<"Front element of queue is "<<mq.front();
 cout<<" Poping Element from queue pop front "<<endl;
 for( int i = 0; i < n; i++)
 {
   cout<<" Front -> "<<mq.front()<<endl;
   mq.pop();
 }
 cout<<"The size of queue is "<<mq.size()<<endl;
}
