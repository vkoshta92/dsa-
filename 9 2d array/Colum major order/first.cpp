// in vector
// rows=matrix.size();
// col= matrix[0].size()
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter rows and col";
    cin>>n>>m;
    // create 2d vector
    vector<vector<int> >matrix(n,vector<int>(m,1));
    // for(int i=0;i<3;i++)
    // for(int j=0;j<4;j++)
    // cout<<matrix[i][j]<<" ";

    // find rows
    // cout<<"Rows="<<matrix.size();
    // cout<<"Col="<<matrix[0].size();

for(int i=0;i<n;i++)
for(int j=0;j<m;j++)
cin>>matrix[i][j];

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
}

}
