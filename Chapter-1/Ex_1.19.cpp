#include<iostream>

int main(){
  int num1,num2;
  std::cin>>num1>>num2;
  if(num1>num2){
    int temp=num1;
    num1=num2;
    num2=temp;
  }
  for(num1;num1<=num2;++num1)
    std::cout<<num1<<std::endl;
  return 0;
}
