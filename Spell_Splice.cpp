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
  int n;
  cin>>n;
  vector<int> a(n),v(n);
  for (int i=0;i<n;i++) {
  cin>>v[i]>>a[i];
  }
  long long maxPro=1,pro=1;
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(i!=j)
      {
      pro=(a[i]*v[j])+(a[j]*v[i]);
      maxPro=max(maxPro,pro);
      }
    }
  }
  cout<<maxPro<<el;
}
return 0;
}