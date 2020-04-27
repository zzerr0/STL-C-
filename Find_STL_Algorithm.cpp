#include<iostream> 
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  vector<float> array {10, 20, 30, 40, 50, 60};
  cout<<"\n Enter Element To Found "<<endl;
   float nfind;
  cin>>nfind;
  auto element = find(array.begin(),array.end(),nfind);
  if(element!=array.end())
  {
    cout<<" Value "<<*element<<" Found"<<endl;
  }
  else
  {
    cout<<"Given Element Is Not Present"<<endl;
  }
  return 0;
}
