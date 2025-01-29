# include<iostream>
#include <cmath>
using namespace std;

int countDigit(int n){
    int count =0;
    while(n){
        count++;
        n= n/10;
    }
    return count;
}

int armstrong(int num , int digit){
int n= num, ans=0, rem;
while(n){
    rem = n%10;
    n= n/10;
    ans += static_cast<int>(pow(rem, digit) + 0.5); // Adding 0.5 to handle rounding issues
}
if (ans==num){
    return 1;
}
else {
    return 0;
}
// return ans;
}


int main(){
int num= 153;
int digit= countDigit(num);
cout<<digit<<endl;
  cout<<armstrong(num,digit)<<endl;
  return 0;
}