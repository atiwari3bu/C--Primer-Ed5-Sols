#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>::iterator beg,vector<int>::iterator end){
    if(beg==end){
        cout<<endl;
        return;
    }
    else{
        cout<<*beg<<" ";
        print(beg+1,end);
    }
}

int main(){
    int i=0;
    int& ref=i;
    vector<int>v1{1,2,3,4,5,6,7,8};
    for(auto &i:v1)
        cout<<i<<" ";
    cout<<endl;
    print(v1.begin(),v1.end());
    return 0;
}
