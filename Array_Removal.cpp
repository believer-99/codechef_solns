#include <bits/stdc++.h>
using namespace std;

#define el endl
#define ll long long

int main()
{
  ios_base::sync_with_stdio(false);
  int t;
  cin >> t;
  cin.ignore();
  while (t--)
  {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    map<int,int>unset;
    int maxx =*max_element(a.begin(),a.end());
    for (int j = 0; j < n; j++)
    {
      int k = 0;
      while((1<<k) <= maxx)
      {
        if((a[j] & (1<<k))==0)
        {
          unset[k]++;
        }
        k++;
      }
    }
    int pos=-1;
    for(auto &it:unset)
    {
      if(it.second==n)
      {
        pos=it.first;
        break;
      }
    }
    int count=0;
    for (int j=0;j<n;j++) {
    if(a[j]>=(1<<pos))count++;
    }
    if(pos==-1)cout<<"0"<<el;
    else cout<<count<<el;
  }
  return 0;
}