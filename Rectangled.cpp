#include<bits/stdc++.h>
using namespace std;

#define el "\n"
#define ll long long int
#define lld long long double
#define pb push_back
#define all(x) begin(x), end(x)
#define sz(x) ((ll)(x).size())
#define eb emplace_back
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
  if(n<4)
  {
    cout<<"0"<<el;
    continue;
  }
  int rem = n/2;
  int area ;
  if(rem%2==0)
  {
    area = (rem/2)*(rem/2);
  }
  else area = (rem/2)*((rem/2)+1);
  cout<<area<<el;
}
return 0;
}