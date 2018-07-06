#include<iostream>
#include<vector>

using namespace std;

int main(){

  int integer;
  vector<int> v;
  while(cin>>integer)
    v.push_back(integer);

//  for(decltype(v.size()) ix=0;ix!=(v.size()-1);++ix)
//    cout<<v[ix]+v[ix+1]<<endl;
  
  for(decltype(v.size()) ix=0, iy=v.size()-1;ix!=v.size();++ix,--iy)
    cout<<v[ix]+v[iy]<<endl;

  return 0;
}
