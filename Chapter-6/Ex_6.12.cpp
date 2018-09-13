#include<iostream>

using namespace std;

void swap(int& r1, int& r2){
  int temp=r1;
  r1=r2;
  r2=temp;
}


int main(){
  int a=3;
  int b=4;
  int &r1=a;
  int &r2=b;
  
  cout<<"Value before swapping: "<<a<<", "<<b<<endl;
  swap(r1,r2);
  cout<<"Value after swapping: "<<a<<", "<<b<<endl;

  return 0;
}

/* The reference version is easier to use as it will be easier to debug */
