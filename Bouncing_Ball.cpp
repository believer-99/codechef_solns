#include <bits/stdc++.h>
using namespace std;

#define el endl
#define ll long long
#define pb push_back

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  cin.ignore();
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    vector<ll> pSum_l(n), pSum_r(n);
    pSum_l[0] = a[0];
    pSum_r[n - 1] = a[n - 1];
    for (int i = 1; i < n; i++)
    {
      pSum_l[i] = pSum_l[i - 1] + a[i];
    }
    for (int j = n - 2; j >= 0; j--)
    {
      pSum_r[j] = pSum_r[j + 1] + a[j];
    }
    ll count = 0;
    for (int i = 0; i < n; i++)
    {
      ll diff = abs(pSum_l[i] - pSum_r[i]);
      if (diff == 1 && a[i]==0)
        count++;
      else if (diff == 0 && a[i]==0)
        count += 2;
    }
    cout << count << el;
  }
  return 0;
}