// two same row  and col matrix
// search element in array

# include<iostream>
using namespace std;

int main(){
 
    int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
int arr2[3][4]={0,1,2,3,4,5,6,7,8,9,10,11};
int arr3[3][5];
  
// add 2 matrix
for(int row=0;row<3;row++){
    for(int col=0;col<4;col++ ){
        arr3[row][col]=arr1[row][col]+arr2[row][col];
    }
}
for(int row=0;row<3;row++)
{
    for(int col=0;col<4;col++ ){
cout<<arr3[row][col]<<":";
    }

}

}