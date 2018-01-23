#include <iostream>
using namespace std;

int main() 
{
    int T,R,N,S,E,W;
    cin>>T;
    while(T-->0)
    {
        cin>>R>>N>>S>>E>>W;
        if((R==N)||(R==S)||(R==E)||(R==W))
        {
            cout<<"\n YES";
        }
        else
        {
            cout<<"\n NO";
        }
    }

	return 0;
}
