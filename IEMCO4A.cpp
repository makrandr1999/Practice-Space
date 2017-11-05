#include <iostream>
using namespace std;
char vowels[5]= {'a', 'e', 'i', 'o', 'u'};
int main() {
	int t,count=0;
	cin>>t;
	while(t--)
	{
	    int n=0,k=0;
	    cin>>n>>k;
	    char joke[n];
	    for(int g=0;g<n;g++)
	    {
	        cin>>joke[g];
	    }
	    for(int h=0;h<n;h++)
	    {
	        for(int j=0;j<5;j++)
	        {
	            if(joke[h]==vowels[j])
	            {
	                count++;
	            }
	        }
	    }
	    if(count>k)
	    {
	        cout<<"Good"<<endl;
	    }
	    else
	    {
	        cout<<"Bad"<<endl;
	    }
	    count=0;
	}
	
	return 0;
}
