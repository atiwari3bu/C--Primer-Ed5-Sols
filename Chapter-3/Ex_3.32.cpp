#include<iostream>
#include<cstddef>
#include<vector>
using namespace std;

int main(){

  int array[10];
  for(size_t ix=0;ix<10;++ix)
    array[ix]=ix;
  for(size_t iy=0;iy<10;++iy)
    cout<<array[iy]<<" ";
  cout<<endl;
	int array2[10];
	for(size_t iz=0;iz<10;++iz)
		array2[iz]=array[iz];

	vector<int> iv;
	for(int i=0;i<10;++i)
		iv.push_back(i);

	vector<int> iv2(iv);
	for(int i=0;i<10;++i)
		cout<<iv2[i]<<" ";
	cout<<endl;
	

  return 0;
}
