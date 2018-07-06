#include<iostream>

using namespace std;

int main(){

  string s("Some String");
  for(decltype(s.size()) index =0; index!=s.size();++index)
      s[index]='X';

  decltype(s.size()) index=0;
  while(index!= s.size()){
    s[index]='X';
    ++index;
  }

  return 0;
}
  
