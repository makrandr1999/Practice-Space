#include<iostream>
using namespace std;
int maxSquare(int b,int m)
{	return (b/m-1)*(b/m)/2;
}
int main()
{	int b,T,m=2;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
	    cin>>b;
	    cout<<maxSquare(b,m)<<"\n";
    }
	return 0;
}
