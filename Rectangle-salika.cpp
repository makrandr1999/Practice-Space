include <iostream>
using namespace std;

int main() {
	int a,b,c,d;
	int T,i;
	cin>>T;
	#i
	for (i=0;i<T;i++)
	{
	    cin>>a>>b>>c>>d;
	if(a==b && c==d)
	{
	  cout<<"YES"<<endl; 
	  continue;
	}
	else if(a==c && b==d)
	{
	    cout<<"YES"<<endl;
	    continue;
	}
	else if (a==d && b==c)
	{
	    cout<<"YES"<<endl;
	    continue;
	}
	cout<<"NO"<<endl;
	}	
	return 0;
}
