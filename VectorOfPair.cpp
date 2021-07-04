#include <iostream>
#include <vector>
using namespace std;
int main(){
 vector < pair< string, int >> v;
 int n = 5, age = 0;
 string name;
 cout<<"Enter name and age "<<endl;
 for(int i = 0; i < n; i++){
  cin>>name>>age;
  v.push_back({name, age});
 }

 for( auto i : v){
  cout<<i.first<<" "<<i.second<<endl;
 }
return 0;
}
