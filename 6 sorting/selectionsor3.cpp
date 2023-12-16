
//leet code  ques 912 sort an array
class Solution{
    public:
    vector<int> sortArray(vector<int>& arr){
int n= arr.size();
for(int i=0;i<n-1;i++){
     int index=i;
     for(int j=i+1;j<n;j++){
        if(arr[j]<arr[index]){
            index=j;
        }
     }
     swap(arr[i],arr[index])
}
 return nums;
    }
   
};

// ye most optimised nhi h. logn se bbi ho skta h.
