#include<iostream>

using namespace std;

int main(){

  int i;
  double d;

  d = i = 3.5;  // d =3; i = 3
  i = d = 3.5;  // d = 3.5; i =3
  cout<<d<<i<<endl;

  return 0;
}
