#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;
    cout << *ptr << endl;

    for (int i = 0; i <4; i++)
    {
        cout<< *(arr+i)<<endl;
        // or we can use
        //  cout<<*ptr<<endl;
        //  ptr++;
    }
    

    return 0;
}