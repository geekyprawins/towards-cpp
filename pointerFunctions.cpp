#include <bits/stdc++.h>
using namespace std;

void increment(int *aptr)
{
    *aptr += 1;
}
void swap(int *b, int *c)
{

    int temp = *b;
    *b = *c;
    *c = temp;
}
int main()
{ //increment
    int a;
    cout << "Enter a number: ";
    cin >> a;
    increment(&a);
    cout << a << endl;

    // swap
    int b, c;
    cout << "Enter 2 numbers : ";
    cin >> b >> c;
    swap(&b, &c);
    cout << b << " " << c << endl;
    return 0;
}