#include<bits/stdc++.h>
using namespace std;

#define el endl

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
  int a[n];
  int count=0;
  for (int i=0;i<n;i++) {
cin>>a[i];
}
for (int i=0;i<n;i++) {
if(a[i]==i+1 && i!=n-1)
{
  swap(a[i],a[i+1]);
  count++;
}
else if(a[i]==i+1 && i==n-1)
{
  swap(a[i],a[i-1]);
  count++;
}
}
cout<<count<<el;
}
return 0;
}