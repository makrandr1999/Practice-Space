#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        double n, s, x;
        cin >> n >> s;
        if(n == 1)
        {
            cout << -1 << endl; // Impossible case (s != 0) as well as valid value (s = 0).
            continue;
        }
        x = sqrt((n*n*s*s) / (n-1));
        for(int i = 1; i < n; i++)
            cout << 0 << " ";
        cout << std::setprecision(10) << std::fixed << x << endl;
    }
}
