#include<iostream>
using namespace std;

int foo(int a,const int* b){
    if(a>(*b)) return a;
    else return *b;
}

int main(){
    int a=5;
    int b=7;
    foo(a,&b);
    return 0;
}

/* We will take const int* as we are not changing the pointer values */
