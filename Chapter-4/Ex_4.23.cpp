#include<iostream>
using namespace std;

int main(){

  string s="word";
//  string p1=s+s[s.size()-1]=='s'? "" : "s";
  string p1=s+(s[s.size()-1]=='d'? "" : "s");
  return 0;
}
