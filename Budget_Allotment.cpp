#include<bits/stdc++.h>
using namespace std;

#define el endl
#define ll long long

int main()
{
ios_base::sync_with_stdio(false);
int t;
cin>>t;
cin.ignore();
while(t--)
{
  int n,x;
  cin>>n>>x;
  vector<int> a(n);
  for (int i=0;i<n;i++) {
  cin>>a[i];
  }
  for (int j=0;j<n;j++) {
  a[j]-=x;
  }
  sort(a.begin(),a.end());
  if(a[0]>=0)
  {
    cout<<n<<el;
    continue;
  }
  int end,start;
  for (int j=0;j<n;j++) {
  if(a[j]>=0)
  {
    end = j;
    start = j-1;
    break;
  }
  }
  int count = 0;
  while(start>=0 && end<=(n-1))
  {
    if(abs(a[start])<=a[end])
    {
      a[end]-=abs(a[start]);
      start--;
      count++;
    }
    else
    {
      a[start]+=a[end];
      end++;
    }
  }
  for (int j=0;j<n;j++) {
  if(a[j]>=0)count++;
  }
  cout<<count<<el;
}
return 0;
}