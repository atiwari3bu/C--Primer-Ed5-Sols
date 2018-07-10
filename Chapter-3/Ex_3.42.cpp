#include<iostream>
#include<vector>

using namespace std;

int main(){
  vector<int> v(10,1);
  int a[10];
  int* beg=a;
  int* end=a+v.size();

  for(auto &i:v){
    *beg=i;
    ++beg;
  }

  for(beg=a;beg!=end;++beg)
    cout<<*beg<<' ';
  cout<<endl;

  return 0;
}
