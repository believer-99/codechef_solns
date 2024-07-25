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
  vector<int> a(n);
  for (int i=0;i<n;i++) {
  cin>>a[i];
  }
  unordered_map<int,int> count;
  for (int j=0;j<n;j++) {
  count[a[j]]++;
  }
  vector<int> dis;
  for(auto &it:count)
  {
    dis.push_back(it.second);
  }
  sort(dis.begin(),dis.end(),greater<int>());
  int sum = 0,maxx=0;
  for(int k=1;k<=dis.size();k++)
  {
    sum+=dis[k-1];
    int rem = sum%k;
    int largestMultiple = sum - rem;
    maxx=max(maxx,largestMultiple);
  }
  cout<<maxx<<el;
}
return 0;
}