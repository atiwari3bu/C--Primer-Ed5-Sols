#include<iostream>

using namespace std;

double calculateFactorial(int num){
  double fact=1;
  while(num>0)
    fact*=num--;
  return fact;
}

int main(){

  int num;
  cout<<"Input the number for which you want to find factorial of: "<<endl;
  cin>>num;
  cout<<"Factorial of "<<num<<" is "<<calculateFactorial(num)<<endl;

  return 0;
}
