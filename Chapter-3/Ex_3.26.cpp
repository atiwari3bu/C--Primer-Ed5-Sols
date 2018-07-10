#include<iostream>

int main(){

  unsigned cnt=42;    // Not a constant expression
  constexpr unsigned sz=42; //constant expression

  int arr[10];    // Array of size 10
  int *parr[sz];  // Array of 42 pointers to int
  string bad[cnt];  // Error as cnt is not a constant expression
  string strs[getsize()]; // Ok; if getsize() is constant expression

  return 0;
}
