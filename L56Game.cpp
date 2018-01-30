#include <iostream>
using namespace std;

int main() 
{
  int T,N,A;
  cin>>T;
  while(T-->0)
  {
      int c=0;
      cin>>N;
      for(int i=0;i<N;i++)
      {
          cin>>A;
          if(A%2==1)
          {
              c++;
          }
      }
      if((c%2==1)&&(N!=1))
      {
          cout<<"2\n";
      }
      else
      {
          cout<<"1 \n ";
      }
  }  
 return 0;
}
