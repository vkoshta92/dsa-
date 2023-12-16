// rotatated array
// 2part agar alag alag sorted ho to binary search laga skte hai.
//agar rote  hua to hme isme binay serach use krenge
// gar rottae fform mr na ho sorted ho to ans ko arr[0] dal denge

class Solution {
public:
    int findMin(vector<int>& nums) {
        int  start=0,end=nums.size()-1,ans=nums[0],mid;
// agar rotate array na hu sorted hui to isliy ans ko bydefault array ka0th element mana h
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]>=nums[0]){
                // agar mid vla phle ke barabar bhu hua tb bhi hme right side jna hoga isliye ak hi conditin me kr liya hai
                start=mid+1;

            }
            else{
                ans=nums[mid];
                end= mid-1;
            }
        }
        return ans;
    }
};