#include <bits/stdc++.h>
using namespace std;

int main()
{
    string big, small;
    getline(cin, big);
    getline(cin, small);

    vector<int> table(256, small.size());

    for (int i = 0; i < small.size() - 1; i++)
    {
        table[small[i]] = small.size() - 1 - i;
    }

    int index = 0;
    int flag = 0;

    while (index <= big.size() - small.size())
    {
        int i = small.size() - 1;

        while (i >= 0 && small[i] == big[index + i])
            i--;

        if (i == -1)
        {
            flag = 1;
            cout << "Substring found at index " << index << endl;
            break;
        }

        index += table[big[index + small.size() - 1]];
    }

    if (flag == 0)
    {
        cout << "Substring not found" << endl;
    }

    return 0;
}
