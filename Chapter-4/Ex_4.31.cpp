#include<iostream>
#include<vector>

using namespace std;

int main(){

  vector<int> ivec(10,1);
  vector<int>::size_type cnt=ivec.size();
  for(vector<int>::size_type ix=0; ix!=ivec.size();ix++,cnt--)
    ivec[ix]=cnt;
  for(int i=0;i<10;++i)
    cout<<ivec[i]<<" ";
  cout<<endl;
  

  // Because we do not want to make copy of iterators and make the process slow
  // we use prefix operators instead of postfix
  return 0;
}
