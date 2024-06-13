#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int N=256;
int count[N]={1};
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    getline(cin,s);
	    string final;
	    for(int i=0;i<n;i++)
	    {
	        count[s[i]]++;
	    }
	    for(int j=0;j<N;j++)
	    {
	        if(count[j]>=1)
	        {
	            final.push_back((char)j);
	        }
	    }
	    cout<<final<<endl;
	}
	return 0;
}
