#include <bits/stdc++.h>
using namespace std;

void printSubsets(int i, int n, int arr[], int target,
                  vector<int> &subset)
{
    if (target == 0)
    {
        for (int i = 0; i < subset.size(); i++)
        {
            cout << subset[i] << " ";
        }
        cout << endl;
        return;
    }

    if (i == n)
    {
        return;
    }

    printSubsets(i + 1, n, arr, target, subset);

    if (arr[i] <= target)
    {
        subset.push_back(arr[i]);
        printSubsets(i + 1, n, arr, target - arr[i], subset);
        subset.pop_back();
    }
}

int main()
{
    int arr[] = {3, 34, 4, 12, 5, 2};
    int targetSum = 9;
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> subset;
    printSubsets(0, n, arr, targetSum, subset);
    return 0;
}
