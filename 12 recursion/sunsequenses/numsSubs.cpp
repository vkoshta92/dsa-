#include <iostream>
#include <vector>
using namespace std;
void subsequebces(int arr[],int index,int n,vector<vector<int> >&ans,vector<int>temp){
if(index==n){
    ans.push_back(temp);
    return;
}


    // no ke case me as iit is likh denge  index ko bada ke

subsequebces(arr,index+1,n,ans,temp);

    // yes ke case me temp me array ka vo index dal denge.
    temp.push_back(arr[index]);
    subsequebces(arr,index+1,n,ans,temp);
    temp.pop_back();

}



int main(){
    int arr[]={1,2,3};
    vector<vector<int> >ans;  // 2d vector means array ke andar array
    vector<int>temp;  // 1 d vector
    subsequebces(arr,0,3,ans,temp);
    for(int i =0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}