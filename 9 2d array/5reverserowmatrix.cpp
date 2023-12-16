#include <iostream>
using namespace std;

void reverseRow(int arr[][4], int row, int col) {
    for (int i = 0; i < row; i++) {
        int left = 0;
        int right = col - 1;

        while (left < right) {
            // Swap the elements at 'left' and 'right' indices within the row
            int temp = arr[i][left];
            arr[i][left] = arr[i][right];
            arr[i][right] = temp;

            left++;
            right--;
        }
    }
}

void printMatrix(int arr[][4], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr1[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    cout << "Original Matrix:" << endl;
    printMatrix(arr1, 3, 4);

    reverseRow(arr1, 3, 4);

    cout << "Matrix with Reversed Rows:" << endl;
    printMatrix(arr1, 3, 4);

    return 0;
}


// second method


// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int  arr[4][4]={1,2,3,4,5,6,77,8,9,10,11,12,13,14,15,16};
// for(int i=0;i<4;i++){
//     int start=0,end=4;
//     while(start<end){
//         swap(arr[i][start],arr[i][end]);
//         start++;
//         end--;
//     }
// }
//    cout<<arr;
// }



