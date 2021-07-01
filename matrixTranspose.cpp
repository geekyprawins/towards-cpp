#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;

    cout << "Enter number of rows and columns : " << endl;
    cin >> n >> m;
    if (n==m)
    {
        /* code */
        int arr[n][m];
    cout << "Enter " << n * m << " elements now : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
}
// performing transpose 

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {   // only upper triangular matrix we need to swap
        // or we can start j value from i too to achieve this
            if (i<j)
        {
            /* code */
            int k = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = k;
        }
        
            
            
        }
}
cout<<"Transposed matrix is : "<<endl;
for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<< arr[i][j]<<" ";
        }
        cout<<"\n";
}
    }
    else cout<<"Not a square matrix :/"<<endl;
    
    



}