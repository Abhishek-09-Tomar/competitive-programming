#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

struct Envelope
{
    int w, h, id;
};

bool compareEnvelopes(const Envelope &a, const Envelope &b)
{
    if (a.w != b.w)
        return a.w < b.w;
    return a.h < b.h;
}

void solve()
{
    int n, cw, ch;
    cin >> n >> cw >> ch;

    vector<Envelope> envs;
    for (int i = 1; i <= n; i++)
    {
        int w, h;
        cin >> w >> h;
        if (w > cw && h > ch)
        {
            envs.push_back({w, h, i});
        }
    }

    if (envs.empty())
    {
        cout << 0 << endl;
        return;
    }

    sort(envs.begin(), envs.end(), compareEnvelopes);

    int m = envs.size();
    vector<int> dp(m, 1);
    vector<int> parent(m, -1);

    int maxLen = 0, bestIdx = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (envs[j].w < envs[i].w && envs[j].h < envs[i].h)
            {
                if (dp[j] + 1 > dp[i])
                {
                    dp[i] = dp[j] + 1;
                    parent[i] = j;
                }
            }
        }
        if (dp[i] > maxLen)
        {
            maxLen = dp[i];
            bestIdx = i;
        }
    }

    cout << maxLen << endl;

    vector<int> path;
    for (int curr = bestIdx; curr != -1; curr = parent[curr])
    {
        path.push_back(envs[curr].id);
    }

    reverse(path.begin(), path.end());
    for (int i = 0; i < path.size(); i++)
    {
        cout << path[i] << (i == path.size() - 1 ? "" : " ");
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    fastio();
    solve();
    return 0;
}