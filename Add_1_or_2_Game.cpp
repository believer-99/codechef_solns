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
  int n;
  cin>>n;
  if(n==1)
  {
    cout<<"ALICE"<<el;
    continue;
  }
  else cout<<"BOB"<<el;
}
return 0;
}