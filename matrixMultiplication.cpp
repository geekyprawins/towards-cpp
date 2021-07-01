#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, n3;

    cout << "Enter n1,n2,n3 : " << endl;
    cin >> n1 >> n2>>n3;
    int arr1[n1][n2];
    int arr2[n2][n3];
    // taking input for matrix 1
    cout << "Enter " << n1 * n2 << " elements now : ";
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> arr1[i][j];
        }
    }

    

   // taking input for matrix 2
    
    cout << "Enter " << n3 * n2 << " elements now : ";
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin >> arr2[i][j];
        }
    }
    // multiplication
    int ans[n1][n3];
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            ans[i][j] = 0;
        }
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j <n3; j++)
        {
            for (int k = 0; k<n2; k++)
            {
                ans[i][j]+=arr1[i][k] * arr2[k][j];
            }
            
        }
        
    }
    cout<<"Resultant matrix is : "<<endl;
    for (int  i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
           cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    


}