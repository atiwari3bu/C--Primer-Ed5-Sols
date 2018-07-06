#include<iostream>

using namespace std;

int main(){

  const string s="Keep Out!";
  for(auto &c: s){ // Type of c is const char &
  }

  return 0;
}
