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

    int currentSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currentSum+=arr[i];
        if (currentSum<0){
            currentSum=0;
        }
       maxSum = max(maxSum,currentSum);
        
    }
    cout<<maxSum<<endl;
    
    
    
    
    }