#include <iostream>
#include <vector>
using namespace std;
void subsequebces(string s,int index,int n,vector<string> &ans,string &temp){
if(index==n){
    ans.push_back(temp);
    return;
}


    // no ke case me as iit is likh denge  index ko bada ke

subsequebces(s,index+1,n,ans,temp);

    // yes ke case me temp me array ka vo index dal denge.
    temp.push_back(s[index]);
    subsequebces(s,index+1,n,ans,temp);
    temp.pop_back();

}



int main(){
    string s= "abc";
    vector<string>ans;  // 2d vector means array ke andar array
    string temp;
    subsequebces(s,0,s.size(),ans,temp);
    for(int i =0;i<ans.size();i++){
   cout<<ans[i]<<endl;
        }
       
    }
