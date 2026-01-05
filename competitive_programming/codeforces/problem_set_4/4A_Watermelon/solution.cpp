#include <bits/stdc++.h>
using namespace std;

// Speed up I/O operations
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void solve()
{
    int w;
    cin >> w;

    if (w > 2 && w % 2 == 0)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    fastio();
    solve();
    return 0;
}