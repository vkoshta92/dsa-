//236=>632

class Solution{
    public:
    int reverse(int x){

int ans=0,rem;
while(x!=0){
rem=x%10;
x=x/10;

if(ans>INT_MAX/10 || ans<INT_MIN/10){
    return 0;
}

ans=ans*10+rem;// answr overflow  ho rha h.
// ans=ans*10+rem> INT_MAX
//ans>INT_MAX-rem/10

}
return ans;


    }

};