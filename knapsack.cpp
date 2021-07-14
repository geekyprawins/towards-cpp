#include <bits/stdc++.h>
using namespace std;
int knapSack(int weight[], int value[], int n, int W)
{
    if (n == 0 || W == 0)
    {
        return 0;
    }
    if (weight[n - 1] > W)
    {
        return knapSack(weight, value, n - 1, W);
    }
    return max(knapSack(weight, value, n - 1, W - weight[n - 1]) + value[n - 1],
               knapSack(weight, value, n - 1, W));
}

int main()
{
    int wt[] = {10, 30, 20};
    int value[] = {60, 100, 120};
    int n = 3;
    int W = 50;
    cout << knapSack(wt, value, n, W);

    return 0;
}