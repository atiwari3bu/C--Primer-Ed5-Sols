#include<iostream>
using namespace std;

int main(){

  auto pbeg=v.begin();
  while(pbeg!=v.end() && *beg>=0)
    cout<<*++pbeg<<endl; // Incorrect method as pbeg will be inceremented first
    // and it will be dereferenced afterwards
    cout<<*pbeg++<<endl;  // Correct method as pbeg will be dereferenced first and
    // and it will be incremented
    //
    return 0;
}
    
