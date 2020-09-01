#include <iostream>
#include <map>
#include <vector>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
   map <int, int> mymap = { {6, 60}, { 4, 40}, { 5, 50}};
   mymap.insert(pair<int, int>(1, 10)); 
   mymap.insert(pair<int, int>(2, 20)); 
   mymap.insert(pair<int, int>(3, 30)); 
   
   vector <int> vec; 
   
   map <int, int> :: iterator it;
   for( it = mymap.begin(); it!= mymap.end(); it++)
   {
     cout<<it->first<<"\t";
     cout<<it->second<<endl;
     vec.push_back(it->second);
   }
   
   vector <int> :: iterator i;
   cout<<"Elements of our vector are "<<endl;
   for (  i = vec.begin(); i!= vec.end(); i++)
   {
     cout<<*i<<endl;
   }
}
