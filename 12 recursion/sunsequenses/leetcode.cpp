
// https://leetcode.com/problems/subsets/submissions/
class Solution {
public:
void Subsets(vector<int>& nums,int index, int length,vector<vector<int> >&ans,vector<int>&temp){
 //temp ko bhi as a refrence use kar liya  and bad me ise pop kr denge.
//base case
 if(index==length){
     ans.push_back(temp);
     return;
 }
 // No
 Subsets(nums,index+1,length,ans,temp);

 //Yes
 temp.push_back(nums[index]);
Subsets(nums,index+1,length,ans,temp);
temp.pop_back(); // temp ko refrence bheja h empty bhi kar diya.


}



    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int> >ans;
        vector<int>temp;
        Subsets(nums,0,nums.size(),ans,temp);
        return ans;
        
    }
};

// O(n)