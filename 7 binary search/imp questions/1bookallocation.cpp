// book allocation
// end point sari array ka sum ho skta h
// https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1

// You have N books, each with A[i] number of pages. M students need to be allocated contiguous books, with each student getting at least one book.
// Out of all the permutations, the goal is to find the permutation where the student with the most books allocated to him gets the minimum number of pages, out of all possible permutations.

// Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order (see the explanation for better understanding).
 
class Solution 
{
    public:
    //Function to find minimum number of pages.
    // M= kitne bcche me batna
    // N = no of books // size of array
    int findPages(int A[], int N, int M) 
    {
       
        if(M>N)
        return -1;
         int start=0,end=0,mid,ans;
         
         for(int i=0;i<N;i++){
             start= max(start,A[i]);
             end+=A[i];
         }
         
       while(start<=end){
           mid= start+(end-start)/2;
           //count means jitnebaccho me bti
           int pages=0,count=1;
           for(int i=0;i<N;i++){
               pages+=A[i];
               if(pages>mid){
                 //dusre student ko batna h
                   count++;
                   pages= A[i];
               }
           }
           // agar count chota oga means km bccho me bt gyi to jyda me bt jegi , pr jyda me bt gyi to km me nhi bt pyegi
           if(count<=M){
               ans=mid;
               end= mid-1;
               
           }
           else{
               start=mid+1;
           }
       }
       return ans;
        
        
    }
    
};