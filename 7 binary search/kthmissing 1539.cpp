class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        // agar sorted array hua to ans me kuch ja nhi rha tha  ans ko aray ke size se define kr denge ,  and koi missing ho hu na usme.
        int start=0, end=arr.size()-1,mid,ans=arr.size();
        while(start<=end){
            mid=start+(end-start)/2;
            // jitne no missing h uska  ak array bn jega ye uska formula h nikalne ka
            // jab array mil jengi mssing no  ki to same no ko  kis index par ekhna h us possiblty ki trh krenge 35 ques ki trh
            if(arr[mid]-mid-1>=k){
                ans=mid;
                end= mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans+k;
    }
};