#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;

    cout << "Enter number of rows and columns : " << endl;
    cin >> n >> m;
    int arr[n][m];
    cout << "Enter " << n * m << " elements now : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int k;
    cout << "Enter element to be searched: ";
    cin >> k;
    bool isFound;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == k)
            {
                cout<<i<<" "<<j<<endl;
                isFound = true;
                
            }
            
        }
    }
    if (isFound)
    {
        cout<<"Element found!";
    }
    else cout<<"Not found!";

}