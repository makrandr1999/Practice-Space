#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n,u,d,a[1000000],para = 1,hill=1;
	    cin>>n>>u>>d;
	    
	    for(int i=0; i<n ; i++){
	        cin>>a[i];
	    }
	    
	    for(int i=0;i<n-1;i++){
	        if(a[i]<a[i+1]){
	            //jumping higher
	            if((a[i+1] - a[i])<=u){
	                hill++;
	            }else{
	                break;
	            }
	            
	        }else if(a[i]>a[i+1]){
	            //falling down
	            if((a[i] - a[i+1])<=d){
	                hill++;
	            }else if(para == 1){
	                //using parachute only once
	                hill++;
	                para = 0;
	            }else{
	                break;
	            }
	        }else if(a[i] == a[i+1]){
	            hill++;
	        }
	    }
	    
	    cout<<hill<<endl;
	}
	return 0;
}
