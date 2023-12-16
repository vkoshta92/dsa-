// #include <iostream>
// using namespace std;
// int main(){
//     int num,rem,ans=0;
//     while(num>9){
//         while(num!=0){
// rem= num%10;
// num= num/10;
// ans= ans+rem;
//         }
//         num=ans;
//     }
//     cout<<num;
// }

class Solution{
    public:
    int addDigits(int num){
       while(num>9){
         int ans=0,rem;
        while(num!=0){
            rem=num%10;
            num=num/10;
            ans+=rem;
        }
        num= ans;
       }
       return num;
    }
};
