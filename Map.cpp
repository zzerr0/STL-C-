#include<iostream>
#include<cstring>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
 // map< key_datatype >, value_datatype> map_name
 
 map <string, long> directory; 
 
 directory["Shivam"] = 7470411492;
 directory ["Shubham"] = 9780565687;
 directory ["Ashna"] = 9214471953;
 cout<<directory["Shivam"]<<endl;
 
 cout<<"To check if no. exist in list or not"<<endl;
 string name;
 while(cin>>name)
 {
 if(directory.find(name) != directory.end())
 {
   cout<<"Phone number of "<<name<<" is "<<directory[name];
 }
 else
 cout<<"Nunber not found"<<endl;
 }
 return 0;
}
