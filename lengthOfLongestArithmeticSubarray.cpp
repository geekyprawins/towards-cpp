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

    int answer = 2;
    int pd = arr[1] - arr[0];
    int j = 2;
    int currentLength = 2;
    while (j < n)
    {
        if (pd == arr[j] - arr[j - 1])
        {
            currentLength++;
        }
        else
        {
            pd = arr[j] - arr[j - 1];
            currentLength = 2;
        }
        answer = max(answer, currentLength);

        j++;
    }
    cout << answer << endl;
    return 0;
}
