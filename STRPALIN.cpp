#include<iostream>
using namespace std;
int main()
{
	int t,i,k;
	string a,b;
	cin>>t;
	while(t--)
	{
		int arr1[124]={0},arr2[124]={0};
		cin>>a>>b;
		for(i=0;i<a.length();i++)
		{
			arr1[a[i]]++;
		}
		for(i=0;i<b.length();i++)
		{
			arr2[b[i]]++;
		}
		k=0;
		for(i=97;i<124;i++)
		{
			if(arr1[i]>0 && arr2[i]>0)
			{
				k=1;
				break;
			}
		}
		if(k==1)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
	}
} 
