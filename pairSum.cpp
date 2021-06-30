#include <bits/stdc++.h>

using namespace std;

bool isPairSumEqualsK(int arr[] , int n , int k){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j <n; j++)
        {
           if (arr[i]+arr[j] ==k)
           {
               cout<<i<<" "<<j<<endl;
               return true;
           }
           
        }
        
    }
    return false;
    




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
    int k; 
    cout<<"Enter value of k to be compared to pairsum : "<<endl;
    cin>>k;
    cout<<isPairSumEqualsK(arr,n,k)<<endl;





} 
