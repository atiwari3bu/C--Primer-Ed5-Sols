#include<iostream>

using namespace std;

int main(){

  unsigned long ul1=3, ul2=7;
  auto result1 = ul1 & ul2;
  auto result2 = ul1 | ul2;
  auto result3 = ul1 && ul2;
  auto result4 = ul1 || ul2;

  cout<<result1<<" "<<result2<<" "<<result3<<" "<<result4<<endl;

  // Here '&&' and '||' means it is true as a boolean function.

  return 0;

}
