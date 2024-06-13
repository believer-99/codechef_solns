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
  int x,y;
  cin>>x>>y;
  int dist=10*x;
  int hrs=10;
  int avg=x;
  while(avg!=y)
  {
    avg=((dist+100)/(hrs+1));
    if((dist+100)/(hrs+1)>=y)
    {
      hrs=hrs-9;
      break;
    }
    else
    {
      dist+=100;
      hrs+=1;
    }
  }
  cout<<hrs<<el;
}
return 0;
}