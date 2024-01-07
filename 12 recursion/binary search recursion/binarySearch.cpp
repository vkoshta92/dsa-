#include <iostream>
using namespace std;

bool binarySearch(int arr[],int start,int end, int searchValue){
    if(start>end)
    return 0;
    int mid= start+ (end-start)/2;

   if(arr[mid]==searchValue)
   return 1;

   else if(arr[mid]<searchValue)
   return binarySearch(arr,mid+1,end,searchValue);

   
   else 
   return binarySearch(arr,start,mid-1,searchValue);

}



int main()
{
int arr[]={1,6,10,16,17};
int searchValue=16;
cout<<binarySearch(arr,0,4,16);

}