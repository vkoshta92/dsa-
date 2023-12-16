
// https://practice.geeksforgeeks.org/problems/sort-a-string2943/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
#include<iostream>
#include <vector>
#include <climits> // for INT_MIN and INT_MAX
using namespace std;
string sort(string s){
vector<int>alpha(26,0);
for(int i=0;i<s.size();i++){
    int index= s[i]-'a'; // string ka index niklne ke liye
    alpha[index]++;
    
}
string ans;
for(int i=0;i<26;i++){
    char c= 'a'+i;
    while(alpha[i])// man o kincharecter 2 bar aa gya
    {
        ans+=c;
        alpha[i]--;
    }
}
return ans;



}