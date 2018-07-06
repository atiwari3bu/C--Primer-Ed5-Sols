#include<iostream>
#include<vector>

using namespace std;
int main(){

  vector<int> v1={42,42,42,42,42,42,42,42,42,42}; // 1st way
  vector<int> v2;// second way
  for(int i=0;i!=10;++i){
    v2.push_back(42);
  }
  vector<int> v3(10,42);// third way and most useful way in this case
  for(auto i: v3)
    cout<<i<<" "; 
  return 0;
}
