// contageosn way me aallogation  same previuus prob ook allocation
//https://practice.geeksforgeeks.org/problems/the-painters-partition-problem1535/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
//{ Driver Code Starts
// driver code
//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    long long minTime(int arr[], int n, int k)
    {
          // k= kitne worker paint krenge
    // n = no of array length
     long long start=0,end=0,ans,mid;
     for(int i=0;i<n;i++){
        // start= max(start,arr[i]); int and long ki vfh se  nhi kr pyega
         if(start<arr[i]){
             start=arr[i];
         }
         end+=arr[i];
     }
      
      while(start<=end){
          mid= start+(end-start)/2;
          long long boardSize=0,count=1;
          
          for(int i=0;i<n;i++){
          boardSize+=arr[i];
          if(boardSize>mid){
              count++;
              boardSize= arr[i];
          }
          }
          if(count<=k){
              ans=mid;
              end=mid-1;
          }
          else{
              start=mid+1;
          }
          
          
      }
      return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends