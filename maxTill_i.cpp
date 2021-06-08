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
    int maxTill_i = arr[0];
    for (int i = 0; i < n; i++)
    {
        maxTill_i = max(arr[i], maxTill_i);
        cout << "Max element till element " << i << " is " << maxTill_i << endl;
    }

    return 0;
}
