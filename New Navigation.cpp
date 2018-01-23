#include <iostream>
using namespace std;

int main() 
{
	int r,n,s,e,w,t;
	cin>>t;
        while(t-->0)
            {
              cin>>r>>n>>s>>e>>w;
                if(r==n||r==s||r==w||r==e)
                    {
                        cout<<"YES\n";
                    }
                else
                    {
                        cout<<"NO\n";
                    }    
            }    
 	return 0;
}
