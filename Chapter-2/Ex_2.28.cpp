#include<iostream>

int main(){

  int i, *const cp; // illegal because cp is uniniatialized
  int* p1,*const p2; // illeagal because p2 in uniniatialized
  const int ic, &r=ic; // illegal because ic is uniniatialized
  const int* const p3; // uniniatialized
  const int* p;
  return 0;
}
