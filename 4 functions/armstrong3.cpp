# include<iostream>
// #include <cmath>
using namespace std;

int countDigit(int n){
    int count =0;
    while(n){
        count++;
        n= n/10;
    }
    return count;
}

//  custom power function
int power(int base, int exp) {
    int calc= 1;
    for (int i=0; i<exp;i++){
        calc= calc*base;
    }
    return calc;
}



int armstrong(int num , int digit){
int n= num, ans=0, rem;
while(n){
    rem = n%10;
    n= n/10;
  ans += power(rem, digit);
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