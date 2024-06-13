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
  int enter[n],depart[n];
  cin.ignore();
  for (int i=0;i<n;i++) {
  cin>>enter[i];
  }
  cin.ignore();
  for (int j=0;j<n;j++) {
  cin>>depart[j];
  }
  int max_count=0,count=0;
  sort(enter,enter+n);
  sort(depart,depart+n);
  for (int i=0;i<n;i++) {
  for (int j=0;j<n;j++) {
  if(enter[j]<depart[i])
  {
    count++;
  }
  }
   if(count>=max_count)
  {
    max_count=count;
  }
  count=0;
  }
  cout<<max_count<<endl;
}
return 0;
}