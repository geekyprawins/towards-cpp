#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter number of elements : " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter any " << n << " elements now : " << endl;
    for (
        int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Entered array is : " << endl;
    for (
        int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}
