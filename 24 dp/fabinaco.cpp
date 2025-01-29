// https://leetcode.com/problems/fibonacci-number/
// class Solution {
// public:
//     int fib(int n) {
//         if(n<=1)
//         return n;

//         return fib(n-1)+fib(n-2);
//     }
// };

// .....................................................................................
// class Solution {
// public:
// int fabi(int n, vector<int>&dp){
//     // bawe case
//     if(n<=1)
//     return n;


// // array me phle se to nahi h 
// if(dp[n]!=-1){
//     return dp[n];
// }

//     return dp[n]= fabi(n-1,dp)+fabi(n-2,dp);
// }


//     int fib(int n) {
//       vector <int>dp(n+1,-1);
//       return fabi(n,dp);
//     }

// };



// // .........................................................................................
// class Solution {
// public:


//     int fib(int n) {
//         vector<int> dp(n+1,-1);
//         if(n<=1)
//         return n;
// dp[0]=0;

// dp[1]=1;
// for (int i=2;i<=n;i++){
//     dp[i]= dp[i-1]+dp[i-2];
// }


// return dp[n];



//     }
   
    

// };






// .................................................................................................
class Solution {
public:



    int fib(int n) {
      if (n<=1){
        return n;
      }
      int prev =1, curr, prev2=0;

      for(int i=2;i<=n;i++){
//  sppace optimisatin 
        curr= prev+prev2;
        prev2= prev;
        prev= curr;
      }
      return curr;


    }
   
    

};