#include<iostream>

using namespace std;

void reset(int &i){
  i=0;
}

int main(){

  int i =42;
  int &r=i;
  reset(r);
  cout<<"i = "<<i<<endl;

  return 0;
}
