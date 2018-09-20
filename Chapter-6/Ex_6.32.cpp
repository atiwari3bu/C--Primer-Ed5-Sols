/* This function is completely legal and it assigns consecutive values from 
 * 0 to 9 to array values named ia */


int &get(int* array,int index){ return array[index];}

int main(){
    int ia[10];
    for(int i=0;i!=10;++i)
        get(ia,i)=i;
    return 0;
}
