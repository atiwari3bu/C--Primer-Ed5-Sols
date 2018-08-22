#include<iostream>
#include<vector>

using namespace std;

int main(){

  vector<int> v1={0,1,1,3};
  vector<int> v2={0,1,1,3,3,5,8};

  for(decltype(v1.size()) i=0,j=0;i!=v1.size() && j !=v2.size(); ++i,++j){
    if(v1[i]!=v2[j]){
      cout<<"False"<<endl;
      return 0;
    }
  }
  cout<<"True"<<endl;

  return 0;
}
