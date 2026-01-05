#include <bits/stdc++.h>
using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void solve()
{
    int d, sumTime;
    cin >> d >> sumTime;

    vector<pair<int, int>> limits(d);
    int minSum = 0, maxSum = 0;

    for (int i = 0; i < d; ++i)
    {
        cin >> limits[i].first >> limits[i].second;
        minSum += limits[i].first;
        maxSum += limits[i].second;
    }

    if (sumTime < minSum || sumTime > maxSum)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    int remaining = sumTime - minSum;

    for (int i = 0; i < d; ++i)
    {
        int can_add = limits[i].second - limits[i].first;
        int add = min(remaining, can_add);

        cout << limits[i].first + add << (i == d - 1 ? "" : " ");

        remaining -= add;
    }
    cout << endl;
}

int main()
{
    fastio();
    solve();
    return 0;
}