#include<iostream>
using namespace std;


int main(){

  char cval;
  int ival;
  unsigned int ui;
  float fval;
  double dval;

  cval='a' + 3; // 'a' is converted to its ascii equivalent and added to 3
  // which gives us 'd';
  cout<<cval<<endl;

  fval=ui-ival*1.0; // fval=ui - (ival * 1.0) ival is converted to float and
  //then converted back to unsigned int which is then subtracted with ui to 
  //give result in float
  cout<<fval<<endl;

  dval = ui * fval;
  // Since `float` usually has more bits then `unsigned int`, `ui` is converted
  // to `float`, then multiplied by `fval`. The result is converted to
  // `double`, then assigned to `dval`.

	cout<<dval<<endl;

  cval = ival + fval + dval;
  // `ival` is converted to `float`, then added to `fval`. The result is
  // converted to `double`, then added to `dval`. The result is converted to
  // `char`, then assigned to `cval`.
	cout<<cval<<endl;

  return 0;
}

