#include<iostream>
using namespace std;

void print1(int num,const int* beg, const int* end){
    cout<<num<<endl;
    while(beg!=end)
        cout<<*beg++<<endl;
}

void print2(int num,const int ia[],size_t size){
    cout<<num<<endl;
    for(size_t i=0;i!=size;++i){
        cout<<ia[i]<<endl;
    }
}

void print3(int num,int (&arr)[2]){
    cout<<num<<endl;
    for(auto elem: arr)
        cout<<elem<<endl;
}

int main(){
    int i=0;
    int j[2]={0,1};
    print1(i,begin(j),end(j));
    print2(i,j,end(j)-begin(j));
    print3(i,j);
    return 0;
}
