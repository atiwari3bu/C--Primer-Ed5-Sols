#include<iostream>

using namespace std;

int main(){

  double fact=1;
  int num=5;
  while(num>0)
    fact*=num--;
  cout<<fact<<endl;

  return 0;
}
