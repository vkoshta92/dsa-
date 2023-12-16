// https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1
//https://practice.geeksforgeeks.org/problems/the-painters-partition-problem1535/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
//https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/submissions/

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int start=0,end=0,mid,ans;
        int N= weights.size();
for(int i=0;i<N;i++){
    start= max(start,weights[i]);
    end+=weights[i];
}
while(start<=end){
    mid=start+(end-start)/2;
    int kg=0,count=1;
    for(int i=0;i<N;i++){
        kg+=weights[i];
        if(kg>mid){
            
            count++;
            kg=weights[i];
        }
    }
    if(count<=days){
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