#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int m,n,maxi,min;
	    cin>>n>>m;
	    int flag=0;
	   maxi=max(m,n);
	    for(int i=2;i<=maxi;i++)
	    {
	        if(m%i==0 && n%i==0)
	        {
	            cout<<i<<endl;flag=1;
	        }
	    }
	    if(flag==0)
	    {
	        cout<<"1"<<endl;
	    }
	}
	return 0;
}