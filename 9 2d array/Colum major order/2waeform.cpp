// wave form  maatrix
#include<iostream>
using namespace std;

void wave(int arr[][4],int row,int col){
    for(int j=0;j<col;j++){
        if(j%2==0){
            //  uper se niche print karna h
            for(int i=0;i<row;i++){
cout<<arr[i][j]<<" ";
            }
        }
        else{
            //niche se uper odd col vle print honge
            for(int i=row-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}
int main(){
int arr1[3][4]={1,2,3,4,5,6,77,8,9,10,11,12};
    // wave print
    wave(arr1,3,4);


}