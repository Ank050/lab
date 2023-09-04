#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

/*

BUBBLE SORT

class bubble
{
public:
    int bs(vector<int> &arr)
    {
        int count1 = 0;
        int i = 0;
        for (i = 0; i < arr.size() - 1; i++)
        {
            for (int j = 0; j < arr.size() - i - 1; j++)
            {
                count1++;
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
        return count1;
    }
};

int main()
{
    int t;
    cin >> t;
    ofstream file;
    file.open("bubble.csv");
    file << "Input(n), count1" << endl;
    while (t--)
    {
        vector<int> arr;
        int size = 0;
        cin >> size;
        int i = 0;
        int val;
        for (i = 0; i < size; i++)
        {
            cin >> val;
            arr.push_back(val);
        }
        bubble b;
        int count = 0;
        count = b.bs(arr);
        for (i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        file << size << "," << count << endl;
    }
    file.close();
    return 0;
}


// SELECTION SORT

class selection
{
public:
    int bs(vector<int> &arr)
    {
        int count = 0;
        int i = 0;
        int j = 0;
        int min = 0;
        for (i = 0; i < arr.size(); i++)
        {
            for (j = i; j < arr.size(); j++)
            {
                count++;
                if (arr[min] > arr[j])
                {
                    min = j;
                }
            }
            swap(arr[i], arr[min]);
        }
        return count;
    }
};

int main()
{
    int t;
    cin >> t;
    ofstream file;
    file.open("selection.csv");
    file << "N,count" << endl;
    while (t--)
    {
        vector<int> arr;
        int size = 0;
        cin >> size;
        int i = 0;
        int val;
        for (i = 0; i < size; i++)
        {
            cin >> val;
            arr.push_back(val);
        }
        selection b;
        int count = 0;
        count = b.bs(arr);
        for (i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        file << size << "," << count << endl;
    }
    file.close();
    return 0;
}



//MERGE SORT

int countM = 0;

class mergeSort
{
public:
    void merge(int arr[], int low, int mid, int high)
    {
        int one = mid - low + 1;
        int two = high - mid;

        int leftarr[one];
        int rightarr[two];

        int i = 0;
        for (i = 0; i < one; i++)
        {
            leftarr[i] = arr[low + i];
        }
        for (i = 0; i < two; i++)
        {
            rightarr[i] = arr[mid + 1 + i];
        }

        int ione = 0;
        int itwo = 0;
        int imerge = low;

        while (ione < one && itwo < two)
        {
            countM++;
            if (leftarr[ione] <= rightarr[itwo])
            {
                arr[imerge] = leftarr[ione];
                ione++;
            }
            else
            {
                arr[imerge] = rightarr[itwo];
                itwo++;
            }
            imerge++;
        }
    }

    void sort(int arr[], int low, int high)
    {
        if (low >= high)
        {
            return;
        }
        int mid = low + (high - low) / 2;
        sort(arr, low, mid);
        sort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }

    void printArray(int arr[], int size)
    {
        int i = 0;
        for (i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    int t;
    cin >> t;
    ofstream file;
    file.open("merge.csv");
    file << "N,count" << endl;
    while (t--)
    {
        int i = 0;
        int n;
        cin >> n;
        int arr[n];
        countM = 0;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        mergeSort m;
        m.sort(arr, 0, n - 1);
        m.printArray(arr, n);
        file << n << "," << countM << endl;
    }
    file.close();
    return 0;
}



// QUICK SORT

int countM = 0;

class quick
{
public:
    int partition(int arr[], int low, int high)
    {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; j++)
        {
            countM++;
            if (arr[j] < pivot)
            {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        return (i + 1);
    }

    void quickSort(int arr[], int low, int high)
    {
        if (low < high)
        {
            int p = partition(arr, low, high);
            quickSort(arr, low, p - 1);
            quickSort(arr, p + 1, high);
        }
    }

    void printArray(int arr[], int size)
    {
        int i = 0;
        for (i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    int t;
    cin >> t;
    ofstream file;
    file.open("quick.csv");
    file << "N,count" << endl;
    while (t--)
    {
        int i = 0;
        int n;
        cin >> n;
        int arr[n];
        countM = 0;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        quick q;
        q.quickSort(arr, 0, n - 1);
        q.printArray(arr, n);
        file << n << "," << countM << endl;
    }
    file.close();
    return 0;
}

*/