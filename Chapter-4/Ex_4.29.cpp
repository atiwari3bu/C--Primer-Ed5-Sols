#include<iostream>
using namespace std;

int main(){

  int x[10];
  int* p = x;

  cout<<sizeof(x)/sizeof(*x)<<endl;
  cout<<sizeof(p)/sizeof(*p)<<endl; // The size of int pointer/ size of int

  return 0;
}
