# include<iostream>
using namespace std;

void  reverseString(string &str, int start,int end){
    //  &str isliye use kiya h tki print uska rfrence kre na ki same string
// hme vaps string chiye h koi value nhi  chiye isliyye return void rhega.
if(start>=end){
    return ;
}
else{
    char firstChar= str[start];
    str[start]= str[end];
    str[end]=firstChar;

     reverseString(str,start+1,end-1);
}

}


int main(){
    string str ="vishnukant";
  reverseString(str,0,9);
  cout<<str<<endl;

}