#include<iostream>
#include<vector>
using namespace std;

int main(){

  vector<int> v(10,3);
  for(auto it=v.begin();it!=v.end();++it)
    *it=2*(*it);
    //cout<<*it<<endl;
  for(auto it=v.begin();it!=v.end();++it)
    cout<<*it<<endl;
    
  return 0;
}

