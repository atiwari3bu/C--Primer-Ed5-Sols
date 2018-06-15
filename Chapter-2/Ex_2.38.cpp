#include<iostream>
#include<typeinfo>
using namespace std;

int main(){

	/* Scenario in which they both deduce same type  */
	int a;
	decltype(a)c=a;
	cout<<typeid(c).name()<<endl;
	auto d=a;
	cout<<typeid(d).name()<<endl;

	/* Scenario in which they both deduce different types */
	auto e=a;
	cout<<typeid(e).name()<<endl;
	decltype(e=a)f=a;
	cout<<typeid(f).name()<<endl;

	/* Solution from internet */

	int i, &j = i;
	auto a2 = j;     // int
	decltype(j) d2;  // int &

	const int i;
	auto a3 = i;          // int
	decltype(i) d3 = 42;  // const int


	return 0;
} 

