#include <bits/stdc++.h>
using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void solve()
{
    int n;
    cin >> n;

    unordered_map<string, int> database;

    while (n--)
    {
        string name;
        cin >> name;

        if (database.find(name) == database.end())
        {
            cout << "OK" << "\n";
            database[name] = 1;
        }
        else
        {
            cout << name << database[name] << "\n";
            database[name]++;
        }
    }
}

int main()
{
    fastio();
    solve();
    return 0;
}