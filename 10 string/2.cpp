// https://practice.geeksforgeeks.org/problems/check-if-string-is-rotated-by-two-places-1587115620/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
#include<iostream>
#include <vector>
#include <climits> // for INT_MIN and INT_MAX
using namespace std;
class Solution
{
    public:
   
   // make function for clockwise rotation
   void rotateanticlockwise(string &s){
       
       char c= s[s.size()-1];
       int index=s.size()-2;
       while(index>=0){
           s[index+1]=s[index];
           index--;
       }
       s[0]=c;
   }
   //make function for clock wise
   void rotateclockwise(string &s){
       char c=s[0];
       int index= 1;
       while(index<=s.size()-1){
           s[index-1]=s[index];
           index++;
       }
       s[s.size()-1]=c;
   }
   
   
   
    bool isRotated(string str1, string str2)
    {
        if(str1.size()!=str2.size())
        return 0;
        
        // 
        string clockwise,anticlockwise;
        
        //clockwise
        clockwise=str1;
        
        rotateclockwise(clockwise);
        rotateclockwise(clockwise);
        if(clockwise==str2)
        return 1;
        
        //anticlockwise
        anticlockwise=str1;
        rotateanticlockwise(anticlockwise);
        rotateanticlockwise(anticlockwise);
        if(anticlockwise==str2)
        return 1;
        
        return 0;
    }
}
