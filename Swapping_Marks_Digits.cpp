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
  int a,b;
  cin>>a>>b;
  int arev,brev;
  arev=((a%10)*10)+(a/10);
  brev=((b%10)*10)+(b/10);
  if(a>brev || arev>brev || arev>b || a>brev|| a>b)
  {
    cout<<"Yes"<<el;
  }
  else{
    cout<<"No"<<el;
  }
}
return 0;
}