// C++ program to demonstrate the use of transform()
//using binary function
#include <iostream> 
#include<vector>
#include <algorithm>   
using namespace std; 

int main() 
{  
  vector<int> a1 {10, 20, 30, 40, 50};
  
  vector<int> a2(a1.size(),-1);
  /* 
  a1.size()=size of vector a2 which is equal to 
  vector a1, all the elements of vector a2 are -1
  */
  vector<int> a3(a1.size());
  //defining an empty vector of size a1 vector
  
  transform(a1.begin(),a1.end(),a2.begin(),a3.begin(),plus<int>());
  //performs operation between pair of values from
  //two different containers
  //and copies result into 3rd container
 
  for(auto it =0;it<a1.size();it++)
  cout<<a3[it]<<endl;
  
  
return 0;
} 
