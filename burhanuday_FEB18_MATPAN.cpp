#include <iostream>
#include <string>

using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--){
	    int prices[26];
	    string alphabet = "abcdefghijklmnopqrstuvwxyz";
	    string s;
	    int i,j,money;
	    money=0;
	    int f[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	    
	    for(i=0;i<26;i++){
	        cin>>prices[i];
	    }
	    
	    cin>>s;
	    
	    for(i=0;i<s.size();i++){
	        for(j=0;j<26;j++){
	            if(s[i] == alphabet[j]){
	                f[j]++;
	            }
	        }
	    }
	    
	    for(i=0;i<26;i++){
	        if(f[i]<1){
	            money += prices[i];
	        }
	    }
	    
	    cout<<money<<endl;
	}
	
	
	return 0;
}
