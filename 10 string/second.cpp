// reverse string
// #include<iostream>
// using namespace std;
// int main()
// {
// string s="vishnu";
// int start=0,end= s.size()-1;
// while(start<end){
//     swap(s[start],s[end]);
//     start++,end--;
// }
// cout<<s;
// }

//............ size of string
// string ke last me nnull charecer ata hi ata h
// #include<iostream>
// using namespace std;
// int main()
// {
// string s="vishnu";
// int size=0;
// while(s[size]!='\0'){
// size++;
// }
// cout<<size<<" ";
// }

//palendrome
#include<iostream>
using namespace std;
int main()
{
string s="naman";
int start=0,end=s.size()-1;
while(start<end){
if(s[start]!=s[end]){
    cout<<"it is not palindrome";
    return 0;
}
start++,end--;
}


cout<<"it is palindrome"<<" ";
}