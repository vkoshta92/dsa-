// row col barbar ho tbhi dinal sum nikega

#include<iostream>
#include<climits>
using namespace std;

void printSumDig(int matrix[][4],int row,int col){
    int first=0;
    int second=0;


// first dignonal sum
int i=0;
while(i<row){
    first+=matrix[i][i];
    i++;
}

// second digonal
i=0;
int j=col-1;
while(j>=0){
second+=matrix[i][j];
i++,j--;
}

cout<<first<<" "<<second<<" ";

}

int main(){
    int matrix[4][4]={1,2,3,4,5,6,77,8,9,10,11,12,13,14,15,16};
    
    // print digonal sum
    printSumDig(matrix,4,4);

}





























// second method


// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int  arr[4][4]={1,2,3,4,5,6,77,8,9,10,11,12,13,14,15,16};
    
//     // first digonal
//     int first=0;
//     for(int i=0;i<4;i++){
//         first+=arr[i][i];
//     }

//     // second digonal
//     int second=0;
//     for(int i=0;i<4;i++){
//         for(int j=3;j>=0;j--){
//             second+=arr[i][j];
//         }
//     }
// if(first<second){
//     cout<<second;
// }
// else{
//     cout<<first;
// }
// cout<<"first="<<first;
// cout<<"second="<<second;
// }