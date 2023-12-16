// search element in array

# include<iostream>
using namespace std;

void printCol(int arr[][4],int row,int col){
    //cout<<arr[2][1];
   //col wise
   for(int j=0;j<col;j++){
    for(int i=0;i<row;i++){
cout<<arr[i][j]<<" ";
    }
   }
}


int main(){
    // create array
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    // for(int row=0;row<3;row++)
    // for(int col=0;col<4;col++)
    // cout<<arr[row][col]<<"";

    //print all the value in array col wise function call
    // printCol(arr,3,4);

    // find an element in our array
    int x=7;
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            if(arr[row][col]==x){
                cout<<"yes";
                return 0;
            }
        }
    }
    cout<<"no";

}