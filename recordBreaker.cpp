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
    if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }
    int ans = 0;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx && arr[i] > arr[i + 1])
        {
            ans++;
        }
        mx = max(mx, arr[i]);
    }
    cout << ans << " record breaking days!" << endl;
    return 0;
}
