#include<iostream>
#include<vector>

using namespace std;

int main(){

  vector<string>v7{10,"hi"};
  for(auto it=v7.cbegin();it!=v7.cend();++it)
    cout<<*it<<endl;
  return 0;
}
