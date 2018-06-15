#include<iostream>

int main(){

  int i;
	const int v2=0; // top-level
	int v1=v2;
	int*p1 =&v1;
	int &r1=v1;
	const int* p2=&v2;  // low-level
	const int *const p3=&i; //right most top level and left most low level
	const int &r2=v2; // top-level

	r1=v2;// legal assignment
	p1=p2;// illegal conversion from const
  p2=p1;// legal assignment
  p1=p3;// illegal conversion
  p2=p3; // legal
	return 0;
}


