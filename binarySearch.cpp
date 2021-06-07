#include <bits/stdc++.h>

using namespace std;
int binarySearch(int arr[], int n, int key)
{// time complexity is log n base 2
    int s = 0, e = n;

    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
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
    cout << binarySearch(arr, n, key);

    return 0;
}
