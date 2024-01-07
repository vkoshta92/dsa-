#include<iostream>

using namespace std;

int countVowels(string str, int index){
    if(index==-1){
        return 0;
    }
    // count vowels;
    if(str[index]=='a'|| str[index]=='e'||str[index]=='i'||str[index]=='o'||str[index]=='u'){
        return (1+countVowels(str,index-1));
    }
    // if not vowels;
    else{
       return countVowels(str,index-1);
    }
}

int main(){
string str= "advocatyyeee";
cout<<countVowels(str,11)<<endl;
}