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
  long long n,l;
  cin>>n>>l;
  long long a[n],fi[n];
  fi[0]=1;
  fi[1]=2;
  for (int i=1;i<=n-1;i++) {
  fi[i+1]=fi[i]+fi[i-1];
  }
  for (int j=0;j<n;j++) {
  a[j]=fi[j+1]*l;
  }
  for (int i=0;i<n;i++) {
  cout<<a[i]<<" ";
  }
  cout<<endl;
}
return 0;
}