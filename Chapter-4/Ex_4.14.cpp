#include<iostream>
using namespace std;

int main(){
  int i;
  if(42 = i); // error as lvalue is required for left
  //hand operator for assignment
  if(i=42) ; // i is assigned value 42 and the condition
  // is evaluated which is true as 42!=0

  return 0;
}
