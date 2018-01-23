#include <iostream>
using namespace std;

int main() 
{
    int a,b,c,d;
cout<<"\n Enter any four values:";
cin>>a>>b>>c>>d;
if(a==c && b==d)
{
cout<<"\n It is a rectangle.";
}
else if(a==b && c==d)
{
cout<<"\n It is a rectangle.";
}
else if (a==d && b==c)
{
cout<<"\n It is a rectangle.";
}
else 
{
cout<<"\n It is not a rectangle.";
}
	return 0;
}
