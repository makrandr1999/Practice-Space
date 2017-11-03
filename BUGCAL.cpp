#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	long long int a,b;
	cin>>t;
	while(t--)
	{
	 long long int result=0;
	 cin>>a>>b;
	 if(a<b)
	 {swap(a,b);}
	 for(int c=1;a!=0;c=c*10)
	 {
	     int s1=((a%10)+(b%10));
	     if(s1>=10)
	     {s1=s1%10;}
	     result=result+(c*s1);
	     a=a/10;
	     b=b/10;
	 }
	 cout<<result<<endl;
	}
	return 0;
}
