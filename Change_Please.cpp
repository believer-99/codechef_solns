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
  int x;
  cin>>x;
  int rem=100-x;
  cout<<(rem/10)*10<<el;
}
return 0;
}