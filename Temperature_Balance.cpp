#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        long long steps=v[0];
        long long time=0;
        for(int i=1;i<n;i++)
        {
            time+=abs(steps);
            steps+=v[i];
            // cout<<time<<" ";
        }
        cout<<time<<endl;
    }
}