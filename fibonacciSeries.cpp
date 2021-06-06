#include <iostream>
using namespace std;
void fiboSeries(int n)
{
    int t1 = 0;
    int t2 = 1;
    int nextTerm;
    for (int i = 0; i < n; i++)
    {
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}

int main()
{
    int numberOfTerms;
    cout << "Enter the number of Fibonacci terms needed : ";
    cin >> numberOfTerms;
    fiboSeries(numberOfTerms);
    return 0;
}
