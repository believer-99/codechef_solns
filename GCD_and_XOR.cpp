#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define ll long long
#define mod 1000000007

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;
  cin >> t;

  while (t--)
  {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);

    for (ll i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    a.erase(unique(a.begin(), a.end()), a.end());

    if (!a.empty() && a[0] == k)
      a.erase(a.begin());

    if (!a.empty() && a.back() == k)
      a.pop_back();

    ll count = 0;
    if (a.size() == 0)
    {
      count = 0;
    }
    else if (a.size() == 1)
    {
      count = (a[0] == k) ? 0 : 1;
    }
    else
    {
      bool allDivisible = true;
      for (auto x : a)
      {
        if (x % k != 0)
        {
          allDivisible = false;
          break;
        }
      }

      count = allDivisible ? 1 : 2;
    }

    cout << count << el;
  }

  return 0;
}
