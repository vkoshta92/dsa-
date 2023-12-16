// 9,7,3,1,6
// 1,7,3,9,6
// 1,3,7,9,6
// selection sort me  kuch rounds hote h ,  sbe chota no dhudhte h pahle, to vo no phle aa jta h.
// agar array ka size n to round chlenge n-1.

// arr[2000]= constast  o(1)

#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {10, 4, 1, 3, 2, 7};
    for (int i = 0; i < 5; i++)
    {
        int index = i;
        for (int j = i + 1; j < 6; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}