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
    int n, m;
    cin >> n >> m;
    if(n<=m)cout<<"-1"<<el;
    else
    {
      cout<<min(m+n,2*m+1)<<el;
    }
  }
  return 0;
}