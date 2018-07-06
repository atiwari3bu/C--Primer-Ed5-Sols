#include<iostream>

using namespace std;

int main(){

  string s("Some string");
  for(char index=0;index!=s.size();++index)
    s[index]='X';

  cout<<s<<endl;

  return 0;

}
