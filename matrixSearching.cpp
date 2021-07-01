#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;

    cout << "Enter number of rows and columns : " << endl;
    cin >> n >> m;

    int arr[n][m];
    cout << "Enter " << n * m << " elements now : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int k;
    cout << "Enter element to be searched: ";
    cin >> k;
    bool isFound = false;
    int r = 0, c = m - 1; // top right position
    while (r < n && c >= 0)
    {

        if (arr[r][c] == k)
        {
            isFound = true;
            break;
        }
        else if (arr[r][c] > k)
        {
            c--;
        }
        else
            r++;
    }
    if (isFound)
    {
        cout << "Element found!!!" << endl;
    }
    else
        cout << "Element doesn't exist :( " << endl;
}