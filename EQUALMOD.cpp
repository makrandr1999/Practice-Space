#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],b[n],mod[n],maxind=0,max,count=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int j=0;j<n;j++)
	    {
	        cin>>b[j];
	        mod[j]=(a[j]%b[j]);
	        if(j==0)
	        {
	            maxind=j;
	            max=mod[j];
	        }
	        else
	        {
	            if(mod[j]>mod[j-1])
	            {
	                maxind=j;
	                max=mod[j];
	            }
	        }
	    }
	    for(int k=0;k<n && k!=maxind ;k++)
	    {
l1:	        if(mod[k]!=max)
	        {
	            a[k]++;
	            count++;
	            goto l1;
	        }
	        
	    }
	    cout<<count<<endl;
	    
	}
	return 0;
}
