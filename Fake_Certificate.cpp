#include<bits/stdc++.h>
using namespace std;

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
  string s;
  getline(cin,s);
  int max_count=0,count0=0,count1=0;
  for(int i=0;i<n;i++)
  {
    if(s[i]=='0')
    {
      count0++;
    }
    else{
      count1++;
      count0=0;
      max_count=max(count0,max_count);
    }
    max_count=max(max_count,count0);
  }
  cout<<(max_count+count1)<<endl;
}
return 0;
}