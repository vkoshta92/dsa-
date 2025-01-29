// in factorial num of zero
// https://www.geeksforgeeks.org/problems/trailing-zeroes-in-factorial5134/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
// #include <iostream>
// using namespace std;


// int main(){

// }
//  jitni bar 5 and 0 aynege utne hi 0 aynehgrr aur 2 hmes  jyda hoga 5 km hog ato hme bas no of 5 count krna h ustne hi o ayenge.


class Solution
{
public:
    int trailingZeroes(int N)
    {
        int count=0;
        
        while(N>=5){
            count= count+N/5;
            N= N/5;
            
        }
        return count;
    }
};