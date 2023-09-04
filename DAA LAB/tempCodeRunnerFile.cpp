/*
#Merge

*Divide and conquer
*Theata nlogn time
*Stable
*Not inplace
*Space omega N

*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int left[n1];
    int right[n2];
    int i = 0;
    vector<int> result;
    for (i = 0; i <= n1; i++)
    {
        left[i] = arr[low + i];
    }
    for (i = 0; i <= n2; i++)
    {
        right[i] = arr[mid + i + 1];
    }
    i = 0;
    int j = 0;
    while (i < n1 && j < n2)
    {
        if (left[i] < right[j])
        {
            result.push_back(left[i]);