// sorting the sentenses
// https://leetcode.com/problems/sorting-the-sentence/
#include<iostream>
#include <vector>
#include <climits> // for INT_MIN and INT_MAX
using namespace std;

class Solution {
public:
    string sortSentence(string s) {
        string words[9], temp;
        
        for(int i=0; i<s.size(); ++i){
          if(s[i]==' '){
            int index = temp[temp.size()-1]-'1';
            temp.pop_back();
            words[index] = temp;
            temp.clear();
          }else{
            temp += s[i];
          }
        }

        int index = temp[temp.size()-1]-'1';
        temp.pop_back();
        words[index] = temp;
        temp.clear();

        for(int i=0; i<9; ++i){
          if(words[i].empty()) break;
          temp += words[i] + " ";  
        }

        temp.pop_back();

        return temp;
    }
};




// //class Solution {
// public:
//     string sortSentence(string s) {
// vector<string> ans(10);
// string temp;
// int count=0,index=0;
// while(index<s.size()){
//   if(s[index]==' '){
//     int position=temp[temp.size()-1]-'0';
//     temp.pop_back();
//     ans[position]=temp;
//     temp.clear();
//     count++;
//   }
//   else{
//     temp+=s[index];
   
//   }
// index++;
// }
//    // loop ke bad last me temp me data rh jega 
//    // Handle the last word after the loop
//  int position=temp[temp.size()-1]-'0';
//     temp.pop_back();
//     ans[position]=temp;
//     temp.clear();
//     count++;


// for(int i=0;i<=count;i++){
//   temp+=ans[i];
//   temp+=' ';
// }
// // temp.pop_back();
// temp+=ans[count-1];
// return temp;
// }

    

// };