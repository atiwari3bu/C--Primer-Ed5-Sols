#include<iostream>
#include<stdexcept>
using namespace std;

int main(){

  int a,b;
  cin>>a>>b;
  if(b==0)
    throw std::runtime_error("Divide by 0");
  cout<<a/b<<endl;
  return 0;
}

