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
  while (t--)
  {
    int a, b, c;
    cin >> a >> b >> c;

    int maxx = max(a, max(b, c));
    int sum = a + b + c - maxx;

    if (maxx > sum + 1)
    {
      cout << "NO" << el;
    }
    else
    {
      cout << "YES" << el;
    }
  }

  return 0;
}
