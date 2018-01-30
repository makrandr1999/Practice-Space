#include <iostream>
using namespace std;

int main() 
{
	int T,N,A;
	cin>>T;

	while(T-->0)
	{
	   bool odd = false;
	    cin>>N;
	    for(int i=0;i<N;i++)
	    {
	        cin>>A;
	        if((A%2)==1)
	            odd = !odd;
	    }
	    if((odd) && (N != 1))
	    {
	        cout<<"2\n";
	    }
	    else
	    {
	        cout<<"1\n";
	    }
	   
	}
	
	return 0;
}
