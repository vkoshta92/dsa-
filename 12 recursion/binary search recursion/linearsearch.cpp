# include<iostream>
using namespace std;

bool linearSearch(int arr[],int index,int arraySize, int searchValue){
if(index==arraySize){
    return 0;
}
if(arr[index]==searchValue){
    return 1;
}

return linearSearch(arr,index+1,arraySize,searchValue);
}


int main(){

    int arr[]={5,8,3,4,6};
    int searchValue= 7;
    cout<<linearSearch(arr,0,5,searchValue);
}