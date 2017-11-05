#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,i;
	    cin>>n>>k;
	    int d[n],t[n],dat[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>t[i];
	        if(t[i]<=k)
	        {
	            k=k-t[i];
	            t[i]=0;
	        }
	        else
	        {
	            t[i]=t[i]-k;
	            k=0;
	        }
	        cin>>d[i];
	        dat[i]=t[i]*d[i];
	    }
        int result=0;
        for(i=0;i<n;i++)
        {
            result=result+dat[i];
        }

        cout<<result<<endl;
    }
	return 0;
}
