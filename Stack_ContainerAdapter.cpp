using namespace std;
#include <iostream>
#include<stack>

int main()
{
 //implementing stack adapter with the use of array
 int n = 10;
 int arr[n];
 
 for( int i = 0; i < n; i++)
 {
   arr[i] = i;
 }
 
 //Declaring a stack
 stack <int> mystack;
 //stack size
 cout<<"Size of my stack is "<<mystack.size()<<endl;
 
 //pushing the elements into the stack
 for( int i = 0; i < n; i++)
 {
   mystack.push( arr[i] );
 }
 
 cout<<"Size of my stack is "<<mystack.size()<<endl;
 cout<<"Top element is "<<mystack.top()<<endl;
 
 //poping and printing the stack elemets one by one
 while( !mystack.empty() )
 {
   cout<<"Top -> "<<mystack.top()<<endl;
   mystack.pop();
 }
  cout<<"Size of my stack is "<<mystack.size()<<endl;
 return 0;
}
