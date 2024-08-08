#include<bits/stdc++.h>
using namespace std;

#define el endl
#define ll long long
#define pb push_back

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
  vector<int> s(16);
  for (int i=0;i<16;i++) {
  cin>>s[i];
  }
  unordered_map<int,int>win;
  vector<int>dup(s.begin(),s.end());
  sort(dup.begin(),dup.end());
  for (int i=15;i>=0;i--) {
  if(i==15)win[dup[i]]=4;
  else if(i>=7)win[dup[i]]=3;
  else if(i>=3)win[dup[i]]=2;
  else if(i>=1)win[dup[i]]=1;
  else dup[i]=0;
}
for (int i=0;i<16;i++) {
cout<<win[s[i]]<<" ";
}
cout<<el;
}
return 0;
}