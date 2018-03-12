#include <iostream>
using namespace std;

int main() {
	int t,n,k,small,capital;
	string s;
	cin>>t;
	
	while(t--){
	    cin>>n>>k;
	    cin>>s;
	    
	    capital=0;
	    small=0;
	    
	    for(int i=0;i<n;i++){
	        if((int)s[i] >= 97){
	            small++;
	        }else{
	            capital++;
	        }
	    }
	    
	    if(small <= k && capital <= k){
	        cout<<"both\n";
	    }else if(small <= k){
	        cout<<"brother\n";
	    }else if(capital <= k){
	        cout<<"chef\n";
	    }else{
	        cout<<"none\n";
	    }
	    
	}
	
	return 0;
}
