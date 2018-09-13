#include<iostream>
#include<string>
using namespace std;

bool isCapital(const string& s){
  for(auto &C : s){
    if(C>='A' && C<='Z') return true;
  }
  return false;
}

int main(){
  string s="Ashish";
  if(isCapital(s)) cout<<"There are capital letters"<<endl;
  else cout<<"There are no capital letters"<<endl;
  return 0;
}
