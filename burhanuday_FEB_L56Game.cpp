#include <iostream>
 
using namespace std;
 
int main() {
    int t,n,a,odd;
    cin>>t;
    
    while(t--){
        cin>>n;
        odd=0;
        
        //array input
        for(int i=0;i<n;i++){
            cin>>a;
            if(a%2==1){
                odd++;
            }
            
        }
       
        if(odd%2!=0 && n!=1){
            cout<<"2\n";
        }else{
            cout<<"1\n";
        }
    }
    
	return 0;
}
