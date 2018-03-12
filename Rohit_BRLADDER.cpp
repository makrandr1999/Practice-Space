#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while(T-->0)
	{
	    int a, b;
	    cin >> a >> b;
	    int c = abs(b - a);
	    if(c == 2)
	    {
	        cout << "YES\n";
	        continue;
	    }
        else if(c == 1)
        {
            if((a > b) && (a % 2 == 0))
            {
    	        cout << "YES\n";
    	        continue;
    	    }
            else if((a < b) && (a % 2 == 1))
            {
    	        cout << "YES\n";
    	        continue;
    	    }
        }
        cout << "NO\n";
	}
	return(0);
}
