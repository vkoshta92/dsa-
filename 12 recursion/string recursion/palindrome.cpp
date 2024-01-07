#include <iostream>
using namespace std;

bool checkPalindrome(string str,int start,int end){
// base condition
if(start>=end){
   return 1;
}

// not matched
if(str[start]!= str[end]){
    return 0;
}
// matched
else{
return checkPalindrome(str,start+1,end-1);
}


}

int main(){
    // check palindrome
     string str= "naman";
    cout<< checkPalindrome(str,0,4)<<endl;
}