// #include <iostream>
// using namespace std;
// int main(){
// int row,col;
// for(row=1;row<=5;row++){
//     for(col=1;col<=row-1;col++){
//         cout<<" ";
//     }

//     for(col=1;col<=9-(row-1)*2;col++){
//  cout<<"*";
//     }
 
//    cout<<endl;
// }

// }


// next approach.....

#include <iostream>
using namespace std;
int main(){
int row,col;
for(row=5;row>=1;row--){
    // kyoki  phli row me 0 dusre me 1 space h tesrre me  2 space hai.,to 9-2*row-1/2 space honge  kyokihme sirf left side ke lene h
    for(col=1;col<=(9-(2*row-1))/2;col++){
        cout<<" ";
    }

    for(col=1;col<=2*row-1;col++){
 cout<<"*";
    }
 
   cout<<endl;
}

}
