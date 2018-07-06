#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){

  vector<int>v1;// size is 0
  vector<int>v2(10);//10 elements initialized to 10
  vector<int>v3(10,42);//10 elements initialized to 42
  vector<int>v4{10}; //1 element initialized to 10
  vector<int>v5{10,42};//2 elements initialized to 10 and 42 
  vector<string>v6{10};//10 elements initialized to 0
  vector<string>v7{10,"hi"};//10 elements initialized to hi
  for(auto &i : v7)
    cout<<i<<" "<<endl;
  return 0;
}
