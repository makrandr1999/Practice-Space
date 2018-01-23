#include <iostream>
using namespace std;

int main()
{
  int T;
  cin >> T;
  while(T-- > 0)
  {
      int d0, d1, r, sum;
      long k, i;
      cin >> k >> d0 >> d1;
      sum = d0 + d1;
      r = sum % 3;
      sum %= 10;
      for(i = 2l; (i < k) && (sum != 8) && (sum != 0); i++)
      {
          r = (r + sum) % 3;
          sum += sum;
          sum %= 10;
      }
      if(sum == 8)
      {
          switch((k-i-1l) % 12l)
          {
              case 0l:
                  r += 2;
                  break;
              case 1l:
                  r += 2;
                  break;
              case 2l:
                  r += 1;
                  break;
              case 3l:
                  r += 2;
                  break;
              case 4l:
                  r += 1;
                  break;
              case 5l:
                  r += 1;
                  break;
              case 6l:
                  break;
              case 7l:
                  r += 1;
                  break;
              case 8l:
                  break;
              case 9l:
                  break;
              case 10l:
                  r += 2;
                  break;
              case 11l:
                  break;
          }
      }
      r %= 3;
      if(r == 0)
          cout << "YES\n";
      else
          cout << "NO\n";
  }
  return(0);
}
