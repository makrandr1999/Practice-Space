#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n,k,temp;
	    cin>>n>>k;
	    vector<int> arr;
	    
	    for(int i=0;i<n;i++){
	        cin>>temp;
	        arr.push_back(temp);
	    }
	    
	    sort(arr.begin(),arr.end());
	    
	    cout<<arr[(n+k)/2]<<endl;
	}
	return 0;
}
