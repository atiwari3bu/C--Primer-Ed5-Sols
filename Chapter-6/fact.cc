#include"Chapter6.h"

double calculateFactorial(int num){
  double fact=1;
  while(num>0)
    fact*=num--;
  return fact;
}
