// row ko colum me change kar ddo col ko row  me change kar do
// https://practice.geeksforgeeks.org/problems/transpose-of-matrix-1587115621/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd

// digonal ke right vli side se
class Solution
{   
    public:  
    //Function to find transpose of a matrix.
    void transpose(vector<vector<int> >& matrix, int n)
    { 
     for(int  i=0;i<n-1;i++){
         for(int j=i+1;j<n;j++){
             swap(matrix[i][j],matrix[j][i]);
         }
     } 
    }
};
// kisi ak time hi swap krenge 2 bar swap kiya to galat ans aa jga  jos wap ho gya use nhi krna h
//digonal ke left vl side se

class Solution
{   
    public:  
    //Function to find transpose of a matrix.
    void transpose(vector<vector<int> >& matrix, int n)
    { 
     for(int  i=0;i<n-1;i++){
         for(int j=i+1;j<n;j++){
             swap(matrix[i][j],matrix[j][i]);
         }
     } 
    }
};