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
  int a,b,c;
  cin>>a>>b>>c;
  int max1=max((a+b),(a+c));
  int max2=max((c+b),(a+c));
  int max3=max((b+c),(a+b));
  int max4=max(max1,max2);
  int max5=max(max2,max3);
  cout<<(max(max4,max5))<<el;
}
return 0;
}