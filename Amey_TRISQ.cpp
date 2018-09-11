#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
    while(T-- > 0)
    {
        //Solve...
        int B;
        cin >> B;
        B -= (B % 2);   // Make the base even.
        int n = (B - 2) / 2; // Number of squares along the base.
        cout << (n * (n + 1) / 2) << endl; // Sum of all natural numbers up to n.
    }
    return(0);
}
