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
  int n,l,r;
  cin>>n>>l>>r;
  int max_h=0,min_h=0,h=0;
  int a[n];
  for (int i=0;i<n;i++) {
  cin>>a[i];
  if(a[i]>=l && a[i]<=r)
  {
    h+=1;
  }
  else{
    h-=1;
  }
    if(h>=max_h)
  {
    max_h=h;
  }
   if(h<=min_h)
  {
    min_h=h;
  }
  }
cout<<max_h<<" "<<min_h<<el;
}
return 0;
}