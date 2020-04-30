// C++ program to demonstrate the use of transform()
//using unary function
#include <iostream> 
#include<string>
#include <algorithm>   
using namespace std; 

int main() 
{ 
string str (" I AM FOUNDER OF ZERO");


string strl;
//resizing the strl so that it can contain str elements
//strl size =  str sizse =21
strl.resize (str.size());
 
 //transforming str from upper case to lower case 
 transform(str.begin(),str.end(),str.begin(),::tolower);

 cout<<"Converted String into lower case \n"
     <<str<<"\n";
     
 cout<<"Converting and copying The Uppercase String \n"
     <<"into another string strl "<<endl;
 transform(str.begin(),str.end(),strl.begin(),::toupper);
 cout<<strl<<endl;
return 0;
} 
