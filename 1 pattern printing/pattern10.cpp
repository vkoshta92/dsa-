#include <iostream>
using namespace std;
int main(){
    int row,col;
    int n;
    cout<<"Input the number";
    cin>>n;
    for(row=1;row<=n;row++){
        // for space print
        for(col=1;col<=n-row;col++){
            cout<<" ";
        }
        // for star print
     for(col=1;col<=row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
}