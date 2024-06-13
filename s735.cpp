#include <iostream>
#include<cmath>
using namespace std;
int hicf(int x,int y)
{
    for(int j=max(x,y);j>=1;j--)
    {
      if(x%j==0 && y%j==0)
      {
          return j;
          break;
      }
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,hcf;
	    cin>>x>>y;
	    for(int i=0;;i+=hicf(x,y))
	    {
	        if((i+y)%x==0 && (i+x)%y==0)
	        {
	            cout<<i<<endl;
	            break;
	        }
	        else
	        {
	            continue;
	        }
	    }
	}
	return 0;
}

