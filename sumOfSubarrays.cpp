#include <bits/stdc++.h>

using namespace std;

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

    int currSum;
    cout << "Sum of subarrays is : " << endl;
    for (int i = 0; i < n; i++)
    {
        currSum = 0;
        for (int j = i; j < n; j++)
        {
            currSum += arr[j];
            cout << currSum << endl;
        }
    }

    return 0;
}

