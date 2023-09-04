#include <bits/stdc++.h>
using namespace std;

void sub(int i, int n, int arr[], int sum, vector<int> &ans)
{
    if (sum == 0)
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
        return;
    }
    if (i == n)
    {
        return;
    }

    sub(i + 1, n, arr, sum, ans);

    if (arr[i] <= sum)
    {
        ans.push_back(arr[i]);
        sub(i + 1, n, arr, sum - arr[i], ans);
        ans.pop_back();
    }
}

int main()
{
    int sum = 8;
    int arr[] = {1, 2, 5, 6, 8};
    int n = 6;
    vector<int> ans;
    sub(0, n, arr, sum, ans);
    return 0;
}