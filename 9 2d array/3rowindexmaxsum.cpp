//jis row ka sum jyda ho uska index  print krna h
#include<iostream>
#include <climits> // for intmax  min
using namespace std;

void printRowMax(int arr[][4],int row,int col){

    int index=-1,sum=INT_MIN;
     for(int i=0;i<row;i++){
        int total=0;
        for(int j=0;j<col;j++){
            total+=arr[i][j];
        }
        if(total>sum){
            sum= total;
            index=i;
        }
    }
    cout<<index;
}


int main(){
     int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
   printRowMax(arr1,3,4);

}





// #include<iostream>
// #include <climits>
// using namespace std;
// int main(){
//     int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
//     int sum=INT_MIN;
//     int index=-1;
//     for(int row=0;row<3;row++){
//         int total=0;
//         for(int col=0;col<4;col++){
//             total+=arr[row][col];
//         }
//         if(total>sum){
//             sum= total;
//             index=row;
//         }
//     }
//     cout<<index;

// }
