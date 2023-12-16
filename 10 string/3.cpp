//https://leetcode.com/problems/check-if-the-sentence-is-pangram/
#include<iostream>
#include <vector>
#include <climits> // for INT_MIN and INT_MAX
using namespace std;
class Solution {
public:
    bool checkIfPangram(string sentence) {
        // sare alpha bet ko store kr liya  agar ak bhi o hua to vo panagram nhi h
        vector<bool> alpha(26,0);
        for(int i=0;i<sentence.size();i++){
            int index= sentence[i]-'a';
            alpha[index]=1;
        }
        for(int i=0;i<26;i++){
            if(alpha[i]==0){
                return 0;
            }
           
        }
 return 1;
    }
};