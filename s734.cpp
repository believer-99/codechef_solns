#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,y,bor,k=1;
	    cin>>n>>y;
	    int a[n];
	     bor=a[0];
	    for(int i=1;i<=n;i++)
	    {
	        cin>>a[i-1];
	        bor=a[i-1]|bor;
	    }
	    while(n)
	    {
	       if((bor|k)==y)
	       {
	          cout<<k<<endl;n=0;
	          break;
	       }
	       else
	       {
	           k++;
	       }
	    }
	    if(n>0)
	    {
	        cout<<"-1";
	    }
	}
	return 0;
}
