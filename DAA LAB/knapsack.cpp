#include <bits/stdc++.h>
using namespace std;

int maximum(int a, int b) { return (a > b) ? a : b; }

int knapsack(int W, int wt[], int val[], int n)
{
    if (n == 0 || W == 0)
        return 0;

    if (wt[n - 1] > W)
        return knapsack(W, wt, val, n - 1);
    else
        return maximum(
            val[n - 1] + knapsack(W - wt[n - 1], wt, val, n - 1),
            knapsack(W, wt, val, n - 1));
}

int main()
{
    int p[] = {60, 100, 120};
    int w[] = {10, 20, 30};
    int capacity = 50;
    int itemCount = sizeof(p) / sizeof(p[0]);
    cout << knapsack(capacity, w, p, itemCount);
    return 0;
}
