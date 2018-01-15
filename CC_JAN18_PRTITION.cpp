#include<iostream>
#include<cmath>
using namespace std;
 
int main()
{
	int T;
	cin >> T;
	while(T-- > 0)
	{
		long n, x;
		cin >> x >> n;
		if(n < 4)
		{
			cout << "impossible\n";
			continue;
		}
		long sum;
		int *a = new int[n];
		sum = ((long)(n*(n+1))/2) - x;
		if(sum % 2 == 1)
		{
			cout << "impossible\n";
			continue;
		}
		sum /= 2;
		for(long i = n ; (i > x) && (sum != 0); i--)
		{
			if((sum >= i) && (sum - i != x))
				{
					a[i-1] = 1;
					sum -= i;
				}
		}
		for(long i = x- 1 ; (i > 0) && (sum != 0); i--)
		{
			if((sum >= i) && (sum - i != x))
				{
					a[i-1] = 1;
					sum -= i;
				}
		}
		a[x-1] = 2;
		for(long i = 0; i < n; i++)
			cout << a[i];
		cout << endl;
	}
	return(0);
}
