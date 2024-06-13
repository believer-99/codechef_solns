#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int N=256;
int count[N]={0};
	int t;
	cin>>t;cin.ignore();
	while(t--)
	{
	    int n=0;
	    cin>>n;cin.ignore();
	    string s;
	    getline(cin,s);
	    string final="";
	    for(int i=0;i<n;i++)
	    {
	        count[s[i]]++;
	    }
	    for(int j=0;j<N;j++)
	    {
	        if(count[j]>=1 && count[j]!=2)
	        {
	            char ch=(char)j;
	            final.push_back(ch);continue;
	        }
	        else if(count[j]==2)
	        {
	            char ch1=(char)j;
	            final.push_back(ch1);
	            final.push_back(ch1);continue;
	        }
	    }
	    cout<<final<<endl;
	}
	return 0;
}


