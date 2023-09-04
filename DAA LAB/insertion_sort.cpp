#include <iostream>
#include <vector>
using namespace std;

class ins
{
public:
    void insertion(vector<int> &arr)
    {
        int n = arr.size();
        for (int i = 1; i < n; i++)
        {
            int key = arr[i];
            int j = i - 1;

            while (j >= 0 && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }
};

int main()
{
    int n;
    cin >> n;
    int i = 0;
    vector<int> A;
    int a = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        A.push_back(a);
    }
    ins obj;
    obj.insertion(A);
    for (i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}