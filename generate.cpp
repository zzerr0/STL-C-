// C++ program to demonstrate the use of std::generate 
#include <iostream> 
#include <vector> 

#include <algorithm>   
// Defining the generator function 
int gen() 
{
  int ar[10];
  for(int i=1;i<10;i++)
  {
    ar[i]=i;
  }
  return ar[6] ;
} 
using namespace std; 

int main() 
{ 

    // Declaring a vector of size 10 
    int n=10;
    vector<int> v1 (n); 
    
   // generate 
   //generate is a mutating algorithm
   generate(v1.begin(), v1.end(), gen); 
   
   //defining the iterator to access the elements
   for (auto i1 = v1.begin(); i1 != v1.end(); ++i1)
    { 
      cout << *i1 << " "; 
    } 
    cout<<endl;
    return 0; 
} 
