#include<iostream>
using namespace std;

int main(){

  string lettergrade;
  float grade;
  cin>>grade;

  lettergrade=(grade<60) ? "F" : (grade<70) ? "D" : (grade < 80) ? "C" : (grade < 90) ? "B" :(grade < 95) ? "A" : "A++";

  cout<<lettergrade<<endl;

  return 0;
}


