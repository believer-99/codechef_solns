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
  int a[n];
  for (int i=0;i<=(int)ceil(n/2.0);i++) {
  a[i]=n-(2*i);
  }
  for (int j=0;j<n-(int)ceil(n/2.0);j++) {
  a[j+(int)ceil(n/2.0)]=(j)*2+1;
  }
  for (int j=0;j<n;j++) {
  cout<<a[j]<<" ";
  }
  cout<<endl;
}
return 0;
}