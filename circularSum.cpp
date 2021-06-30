#include <bits/stdc++.h>

using namespace std;

int kadaneSum(int arr[], int n)
{
    int currentSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
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
    int wrapSum;
    int nonWrapSum;
    nonWrapSum = kadaneSum(arr, n);
    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum += arr[i];
        arr[i] *= -1;
    }
    wrapSum = totalSum + kadaneSum(arr, n);

    cout << max(wrapSum, nonWrapSum) << endl;
}
