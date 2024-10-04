#include<bits/stdc++.h>
using namespace std;

#define el "\n"
#define ll long long
#define pb push_back
#define mod 1000000007

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int t;
cin>>t;
cin.ignore();
while(t--)
{
  int n,k;
  cin>>n>>k;
  vector<int> a(n);
  for (int i=0;i<n;i++) {
  cin>>a[i];
  }
  int sum = 0;
  int count = 0;
  for (int i=0;i<n;i++) {
    sum+=a[i];
    if(sum>k)break;
    count++;
  }
  cout<<count<<el;
}
return 0;
}