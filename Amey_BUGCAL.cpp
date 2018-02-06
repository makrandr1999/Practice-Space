#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
    while(T-- > 0)
    {
        int a, b, s[10], i = 10;
        cin >> a >> b;
        while((a > 0) || (b > 0))
        {
            i--;
            s[i] = ((a%10) + (b%10)) % 10;
            a /= 10;
            b /= 10;
        }
        for(; i < 10; i++)
        {
        	cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
