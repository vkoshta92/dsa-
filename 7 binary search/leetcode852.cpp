
//peek index mountain array
//peak index jha se niche jna strt ho vo find krna h
// peak element alwayys left and right  vale se bada  hoga.
class Solution {
public:

    int peakIndexInMountainArray(vector<int>& arr) {
        int start=0,end=arr.size()-1,mid;

        while(start<=end){
            // mid= start+(end-start)/2;
            //asi memory ko access kr rhe  the jiski permision nhi h
            // ab ye problem solve ho jegi.
            mid=end+(start-end)/2;
            //peak element
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                return mid;
            }
            // right side move
            else if(arr[mid]>arr[mid-1]){
                start=mid+1;

            }
            // left side move
            else{
                end=mid-1;
            }
        }
        return -1;

    }
};