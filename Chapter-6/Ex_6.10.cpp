#include<iostream>

using namespace std;

void swap(int* a, int* b){
  int temp = *a;
  *a=*b;
  *b=temp;
}

int main(){

  int a=3;
  int b=4;
  int* p1=&a;
  int* p2=&b;

  cout<<"a= "<<a<<", b= "<<b<<endl;
  swap(p1,p2);
  cout<<"The value after swapping is : "<<"a= "<<a<<" ,b= "<<b<<endl;
  
  return 0;
}
