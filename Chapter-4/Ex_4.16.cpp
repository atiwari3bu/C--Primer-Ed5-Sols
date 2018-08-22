#include<iostream>

using namespace std;

int main(){

  if(p=getptr()!=0); // incorrect method
  // As getptr's priority is highest, it
  // will first get value and check whether
  // the value is not zero and bool value
  // will be then assigned to p.
  if((p=getptr())!=0); // Correct method

  if(i=1024);   //  incorrect method
  // i is assigned value of 1024 and 
  // condition is evaluated which is 
  // true always as 1024 !=0
  //
  if(i==1024); // Correct method

  return 0;
}
