#include<iostream>
#include<cstring>
using namespace std;

int main(){

  char a[]="Ashish";
  char b[]="Tiwari";
  char c[13];
  strcpy(c,a);
  strcat(c,b);

  cout<<c<<endl;

  return 0;
}

