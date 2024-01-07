// # include<iostream>
// using namespace std;
 
//  void print(int arr[],int index, int n){
// if(index==n){
//     return;
// }
// cout<<arr[index]<<"";
// print(arr,index+1,n);
//  }

//   int main(){
// int arr[]={3,4,1,2,8};
// print(arr,0,5); // 3,4,1,2,8
//   }

///..............
// # include<iostream>
// using namespace std;
 
//  void print(int arr[],int index, int n){
// if(index==n){
//     return;
// }
// print(arr,index+1,n);
// cout<<arr[index]<<"";

//  }

//   int main(){
// int arr[]={3,4,1,2,8};
// print(arr,0,5); // 8,2,1,4,3
//   }


//................
// # include<iostream>
// using namespace std;
 
//  void print(int arr[],int index){
// if(index==-1){
//     return;
// }
// print(arr,index-1);
// cout<<arr[index]<<"";

//  }

//   int main(){
// int arr[]={3,4,1,2,8};
// print(arr,4); //3,4,1,2,8
//   }

//.....
# include<iostream>
using namespace std;
 
 void print(int arr[],int index){
if(index==-1){
    return;
}

cout<<arr[index]<<"";
print(arr,index-1);

 }

  int main(){
int arr[]={3,4,1,2,8};
print(arr,4); // 8,2,1,4,3
  }
