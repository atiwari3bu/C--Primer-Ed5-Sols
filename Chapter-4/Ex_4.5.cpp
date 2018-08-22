#include<iostream>
using namespace std;

int main(){

  int i = -30 * 3 + 21 / 5;
  // i = (-30 * 3) + (21/5) 
  // i = -90 + 4
  // i = -86
  cout<<" i = "<<i<<endl;

  int j = -30 + 3 * 21 / 5;
  // j = -30 + ((3 *21) / 5)
  // j = -30 + (63 / 5)
  // j = -30 + 12
  // j = -18
  cout<<" j = "<<j<<endl;

  int k = 30 / 3 * 21 % 5;
  // k = ((( 30 / 3) * 21) % 5)
  // k = ((10 * 21 ) % 5)
  // k = (210 % 5)
  // k = 0
  cout<<" k = "<<k<<endl;

  int l = -30 / 3 * 21 % 4;
  // l = (((-30 / 3) * 21) % 4)
  // l = ((-10 * 21) % 4 )
  // l = (-210 % 4 )
  // l = 2 
  cout<<" l = "<<l<<endl;

  return 0;
}
