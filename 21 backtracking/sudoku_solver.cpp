// https://leetcode.com/problems/sudoku-solver/description/

// class Solution
// {
// public:
//     bool check(int num, vector<vector<char>> &board, int i, int j)
//     {
//         char c = '0' + num;

//         // check at same row
//         for (int col = 0; col < 9; col++)
//         {
//             if (board[i][col] == c)
//             {
//                 return 0;
//             }
//         }

//         // check at same coloumn
//         for (int row = 0; row < 9; row++)
//         {
//             if (board[row][j] == c)
//             {
//                 return 0;
//             }
//         }

//         // checkat smae box

//         int row = i / 3 * 3, col = j / 3 * 3;
//         for (int a = row; a < row + 3; a++)
//         {
//             for (int b = col; b < col + 3; b++)
//             {
//                 if (board[a][b] == c)
//                 {
//                     return 0;
//                 }
//             }
//         }
//         return 1;
//     }

//     bool find(int i, int j, vector<vector<char>> &board)
//     {
//         // base condition
//         if (i == 9)
//             return 1;

//         // sari row bhar gyi tb next row
//         if (j == 9)
//             return find(i + 1, 0, board);

//         // agar row me value nhi bhari h
//         if (board[i][j] != '.')
//             return find(i, j + 1, board);

//         for (int num = 1; num < 10; num++)
//         {
//             // bharna h to 1 rerurn nhi bharna h to rerurn 0
//             if (check(num, board, i, j))
//             {
//                 board[i][j] = '0' + num;
//                 if (find(i, j + 1, board))
//                     return 1;
//                 board[i][j] = '.';
//             }
//         }
//         return 0;
//     }

//     void solveSudoku(vector<vector<char>> &board)



//     {
//         find(0, 0, board);
//     }
// };



#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool check(int num, vector<vector<char>> &board, int i, int j)
    {
        char c = '0' + num;

        // Check the same row
        for (int col = 0; col < 9; col++)
        {
            if (board[i][col] == c)
            {
                return false;
            }
        }

        // Check the same column
        for (int row = 0; row < 9; row++)
        {
            if (board[row][j] == c)
            {
                return false;
            }
        }

        // Check the 3x3 sub-box
        int rowStart = (i / 3) * 3;
        int colStart = (j / 3) * 3;
        for (int a = rowStart; a < rowStart + 3; a++)
        {
            for (int b = colStart; b < colStart + 3; b++)
            {
                if (board[a][b] == c)
                {
                    return false;
                }
            }
        }
        return true;
    }

    bool find(int i, int j, vector<vector<char>> &board)
    {
        // Base condition
        if (i == 9)
            return true;

        // Move to the next row
        if (j == 9)
            return find(i + 1, 0, board);

        // If cell is already filled, move to the next column
        if (board[i][j] != '.')
            return find(i, j + 1, board);

        for (int num = 1; num <= 9; num++)
        {
            if (check(num, board, i, j))
            {
                board[i][j] = '0' + num;
                if (find(i, j + 1, board))
                    return true;
                board[i][j] = '.';
            }
        }
        return false;
    }

    void solveSudoku(vector<vector<char>> &board)
    {
        find(0, 0, board);
    }
};

int main()
{
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    Solution().solveSudoku(board);

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
