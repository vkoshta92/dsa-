//first and last postin of elemment in sorted array.
// leet code quesn no 34
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1 ,first=-1,last=-1,mid;
// for first  occurence
while(start<=end){
     mid=start+(end-start)/2;
    if(nums[mid]==target){
        first=mid;
        end= mid-1;
    }
    else if(nums[mid]<target){
        start=mid+1;

    }
    else{
        end= mid-1;
    }
}

// for  last occurence
start=0,end=nums.size()-1;
while(start<=end){
    mid=start+(end-start)/2;
    if(nums[mid]==target){
        last=mid;
        start= mid+1;
    }
    else if(nums[mid]<target){
        start=mid+1;

    }
    else{
        end= mid-1;
    }
}

vector<int>finalArray(2);
finalArray[0]=first;
finalArray[1]=last;
return last-first+1;;
}
    
    
};