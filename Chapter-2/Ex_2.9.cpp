#include<iostream>

int main(){
	// We have to specify the type which we are inputting 
	int input_value;
	std::cin>>input_value;
	//Loss of information
	int i={3.14};
	double d={3.14}; // OK
	// (c)
	//double salary = wage = 9999.99;  // Error
	double salary, wage;
	salary = wage = 9999.99; 

  int i=3.14; // Wrong
  float i=3.14; //correct:w
	return 0;

}
