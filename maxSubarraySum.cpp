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
int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum+=arr[k];
            }
            maxSum = max(maxSum , sum);
            cout << endl;
        }
    }
    cout<<"Maximum sum of all subarrays is "<<maxSum<<endl;
}