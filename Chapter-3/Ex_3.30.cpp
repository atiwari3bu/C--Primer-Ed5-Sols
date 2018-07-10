#include<cstddef>

int main(){

  constexpr size_t array_size=10;
  int ia[array_size];

  for(size_t ix=1; ix<=array_size; ++ix)
    ia[ix]=ix;    // ia[array_size] is index error in this loop

  return 0;
}
