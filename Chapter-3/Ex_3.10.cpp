#include<iostream>

using namespace std;

int main(){

  string s;
  cin>>s;
  for(const auto &c:s)
    if(!ispunct(c))
      cout<<c;
  cout<<endl;
  return 0;
}

