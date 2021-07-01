#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter no.of characters in sentence: ";
    cin >> n;
    cin.ignore();
    char arr[n + 1];
    cout << "Enter a " << n << " lettered sentence : ";
    cin.getline(arr, n);
    cin.ignore();
    int i = 0;
    int currLength = 0;
    int maxLength = 0;
    int maxst = 0, st = 0;
    while (true)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currLength > maxLength)
            {
                maxLength = currLength;
                maxst = st;
            }
            currLength = 0;
            st = i + 1;
        }
        else
            currLength++;
        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }

    cout << maxLength << endl;
    cout << "Word of maxLength is : ";
    for (int i = 0; i < maxLength; i++)
    {
        cout << arr[i + maxst];
    }
}