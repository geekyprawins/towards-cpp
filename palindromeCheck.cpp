#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter no.of characters in array: ";
    cin >> n;
    char arr[n + 1];
    cout << "Enter a " << n << " lettered sentence : ";
    cin >> arr;
    bool check = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            check = 0;
            break;
        }
    }

    if (check)
    {
        cout << arr << " is palindrome!";
    }
    else
        cout << "Not a palindrome : (";
}