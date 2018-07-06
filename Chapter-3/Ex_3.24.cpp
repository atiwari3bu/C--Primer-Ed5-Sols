#include<iostream>
#include<vector>
using namespace std;

int main(){

  int integer;
  vector<int> v;
  while(cin>>integer)
    v.push_back(integer);

  //for(auto iter=v.begin();iter!=v.end();++iter)
  //  cout<<*(iter)+*(iter+1)<<endl;
  auto iter2=v.end();
  --iter2;
  for(auto iter1=v.begin();
      iter1!=v.end();++iter1,--iter2)
    cout<<*iter1+*iter2<<endl;

  return 0;
}
