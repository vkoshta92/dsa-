// 7,4,8,5,3
// 4,7,5,3,8
// 4,5,3,7,8
// 4,3,5,7,8
//  sabse bde element ko  last me le jana h

// har round me 0-3
// 0-2
// 0-1
// 0-0
// timecomplexity-O(n2) == worst case
// space complexity- O(1)
// best case-O(n)
// avg case- O(n2)

#include <iostream>
using namespace std;
int main()
{

    int arr[1000];
    int n;
    cout << "Enter size of array";
    cin >> n;
    cout << "Enter the array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = n - 2; i >= 0; i--)
    {
        bool isSwapped = 0; // man liya ak bhi swapiing nhi hui hai.
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                isSwapped == 1;
                swap(arr[j], arr[j + 1]);
            }
        }
        if (isSwapped == 0)
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// for (int i = 0; i < n - 1; ++i)
// {
//     bool swapped = false;
//     for (int j = n - 1; j > i; - -j)
//     {
//         if (arr[j] < arr[j - 1])
//         {
//             swap(arr[j], arr[j - 1]);
//             swapped = true;
//         }
//     }

//     if (!swapped)
//         return;
// }