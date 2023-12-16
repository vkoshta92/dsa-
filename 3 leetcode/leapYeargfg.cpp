// jo 400 se divide ho leap year hai.
//jo 4 se divide ho 100 e nhi leap year h
// phle chacek krenge 400 se divide h to leap yaer ho jega dusri chk nhi karni hai 
// and uske   bad agr  4 se dived ho 100 se na ho tbhi leap year hoga.

// n%400==0 // leap year
//else if (n%4==0 && n%100!=0){
// leap year
//}

// else sre leap year nhi h


class Solution{
    public:
    int isLeap(int N){
if(N%400-0){
    return 1; // leap yaer  hai.
}
else if(N%4==0 && N%100!=0){
    return 1;
}
else{
    return 0;
}
    }
};