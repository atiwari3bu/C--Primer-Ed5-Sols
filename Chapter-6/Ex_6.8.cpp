#include "Chapter6.h"
#include<iostream>
using namespace std;

float calculateAbsoluteValue(float num){
  if(num<0) return num/-1;
  else return num;
}

int main(){
  float num;
  float abs_value;
  cout<<"Enter the number to find its absolute value"<<endl;
  cin>>num;

  abs_value=calculateAbsoluteValue(num);
  cout<<"The absolute value of "<<num<<" is : "<<abs_value<<endl;

  return 0;
}
