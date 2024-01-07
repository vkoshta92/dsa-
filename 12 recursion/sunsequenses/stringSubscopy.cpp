#include <iostream>
#include <vector>
using namespace std;
void subsString(string s,int index,int size,vector<string> &ans,string &temp){

if(index==size){
    ans.push_back(temp);
    return;
}



// is not included
subsString(s,index+1,size,ans,temp);

// is included
temp.push_back(s[index]);
subsString(s,index+1,size,ans,temp);
temp.pop_back();

}

int main(){
    string s= "abcdc";
    vector<string>ans;
    string temp;
    subsString(s,0,s.size(),ans,temp);
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<endl;
}