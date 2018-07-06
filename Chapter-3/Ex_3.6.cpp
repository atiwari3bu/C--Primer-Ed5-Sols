#include<iostream>

using namespace std;

int main(){

  string s("Some string");
  for(decltype(s.size()) index=0;index!=s.size();++index)
    s[index]='X';

  cout<<s<<endl;

  return 0;
}
