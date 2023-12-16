#include<iostream>
#include <vector>
#include <climits> // for INT_MIN and INT_MAX
using namespace std;
class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>lower(26,0);
        vector<int>upper(26,0);
        for(int i=0;i<s.size();i++){
             // pta kse chlega small ya capital ko dekh rha hu
            if(s[i]>='a'){
                lower[s[i]-'a']++;// us aary me 0  se usko usko bda dega agar ayega to.
            }
            else{
                upper[s[i]-'A']++;
            }
        }
// upper lower me sb store ho gya h kitni bar aya h
int count=0;
bool odd=0;// actualy even ko direct jod dete h odd extra bchta h use boolian use krke odd ke case me 1 krt dnege

// for lower
for(int i=0;i<26;i++){
if(lower[i]%2==0){
    count=count+lower[i];

}
else{
    count= count+(lower[i]-1);
    odd=1;
}
//for upper
if(upper[i]%2==0){
    count+=upper[i];
}
else{
    count+=upper[i]-1;
    odd=1;// odd ke case me extra hot ah jise hmbich me la skte h 
}

}

return count+odd;
    }


};