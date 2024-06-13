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
    cout<<(((floor(n/2))*1)+((floor(n/2))*12)+ (n- 2*(floor(n/2)))*6)<<endl;
  }
return 0;
}