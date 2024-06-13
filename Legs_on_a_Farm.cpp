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
  int cow=n/4;
  int rem=n%4;
  int chic=rem/2;
  cout<<(cow+chic)<<el;
}
return 0;
}