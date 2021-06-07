#include <bits/stdc++.h>

using namespace std;

int linearSearch(int arr[], int n, int key)
{// time complexity is n

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }

    return -1;
}

int main()
{

    int n;
    cout << "Enter number of elements : " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter any " << n << " elements now : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;

    cout << "Enter the element to be searched : " << endl;
    cin >> key;
    cout << linearSearch(arr, n, key);

    return 0;
}
