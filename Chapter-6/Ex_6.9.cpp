#include<iostream>
#include"Chapter6.h"

using namespace std;

int main(){
  int num;
  cout<<"Input the number for which you want to find factorial of: "<<endl;
  cin>>num;
  cout<<"Factorial of "<<num<<" is "<<calculateFactorial(num)<<endl;

  return 0;
}
