#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int hammingDistance(int a, int b)
{
    int x = a ^ b;
    int count = 0;

    while (x > 0)
    {
        count += x % 2;
        x = x / 2;
    }

    return count;
}

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), [k](int a, int b)
    {
        int d1 = hammingDistance(a, k);
        int d2 = hammingDistance(b, k);

        if (d1 == d2)
        {
            return a < b;
        }

        return d1 < d2;
    });

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
