#include <bits/stdc++.h>
using namespace std;
// n-queen problem
// n is the number of queens
// each queen is represented by a number
// the queen can only attack the queen on the same row, column, or diagonal
bool isSafe(int **arr, int x, int y, int n)
{
    for (int row = 0; row < x; row++)
    {
        if (arr[row][y] == 1)
        {
            // 1 denotes queen placed
            return false;
        }
    }
    int row = x;
    int col = y;
    while (row >= 0 && col >= 0)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col--;
    }
    row = x;
    col = y;
    while (row >= 0 && col < n)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
        return true;
        row--;
        col++;
    }
}

bool nQueens(int **arr, int x, int n)
{
    if (x == n)
    {
        return true;
    }
    for (int col = 0; col < n; col++)
    {
        if (isSafe(arr, x, col, n))
        {
            arr[x][col] = 1;
            if (nQueens(arr, x + 1, n))
            {
                return true;
            }
            arr[x][col] = 0;
        }
    }
    return false;
}

int main()
{

    int n;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }
    if (nQueens(arr, 0, n))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "no solution";
    }

    return 0;
}