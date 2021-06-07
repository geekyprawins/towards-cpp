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

    int minNum, maxNum;
    // min = arr[0];
    // max = arr[0];
    // or
    minNum = INT_MAX;
    maxNum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxNum = max(maxNum, arr[i]);
        minNum = min(minNum, arr[i]);

        // if (min > arr[i])
        // {

        //     min = arr[i];
        // }
        // if (max < arr[i])
        // {

        //     max = arr[i];
        // }
    }
    cout << "Max is " << maxNum << endl;
    cout << "Min is " << minNum << endl;

    return 0;
}
