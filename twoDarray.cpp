#include <bits/stdc++.h>
using namespace std;


int main(){
int n,m;

cout<<"Enter number of rows and columns : "<<endl;
cin>>n>>m;
int arr[n][m];
cout<<"Enter "<<n*m<<" elements now : ";
for (int i = 0; i < n; i++)
{
   for (int j = 0; j < m; j++)
   {
       cin>>arr[i][j];
   }
   
}
cout<<"Entered matrix is : "<<endl;
for (int i = 0; i < n; i++)
{
   for (int j = 0; j < m; j++)
   {
       cout<<arr[i][j]<<" ";
   }
   cout<<"\n";
}

}
