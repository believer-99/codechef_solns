#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int b[n];
        vector<pair<int, int>> a;
        set<int> s;
        bool ans = false;
        int x, y;
        vector<int> h[101];
        for (int i = 0; i < n; ++i)
        {
            int m = s.size();
            cin >> b[i];
            h[b[i]].push_back(i);
            s.insert(b[i]);
            if (m != s.size())
            {
                a.push_back({b[i], i});
            }
        }

        for (int i = 0; i < 101; ++i)
        {
            if (h[i].size() > 1 && i != 1)
            {
                ans = true;
                x = h[i][0];
                y = h[i][1];
                break;
            }
        }

        n = a.size();
        if (!ans)
        {
            for (int i = 0; i < n; ++i)
            {
                for (int j = i + 1; j < n; ++j)
                {
                    if (!isPrime(a[i].first + a[j].first))
                    {
                        x = a[i].second;
                        y = a[j].second;
                        ans = true;
                        break;
                    }
                }
                if (ans)
                    break;
            }
        }

        if (ans)
        {
            cout << x + 1 << " " << y + 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}

