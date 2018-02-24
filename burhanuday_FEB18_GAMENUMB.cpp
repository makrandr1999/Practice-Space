#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int n,k,A[1000000],D[1000000],B[1000000],cards[1000000],c=0,low,high,sum=0,siz;
        vector<int> cards_v;
        
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        
        for(int i=0;i<n;i++){
            cin>>D[i];
        }
        
        for(int i=0;i<k;i++){
            cin>>B[i];
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<D[i];j++){
                cards[c] = A[i];
                c++;
            }
            
        }
        
        for(int i=0;i<c;i++){
            for(int j=0;j<c-i-1;j++){
                if(cards[j]>cards[j+1]){
                    int temp;
                    temp = cards[j];
                    cards[j] = cards[j+1];
                    cards[j+1] = temp;
                }
            }
        }
        
        
        for(int i=0;i<c;i++){
            cards_v.push_back(cards[i]);
        }
       
        
        for(int i=1;i<=k;i++){
            if(i%2==1){
                //Chef's turn
                //remove smallest numbers
                siz = cards_v.size();
                for(int j=0;j<siz-B[i-1];j++){
                    low = 0;
                    for(int l=0;l<cards_v.size();l++){
                        if(cards_v[low]>cards_v[l])
                            low = l;
                    }
                    cards_v.erase(cards_v.begin()+low);
                }
                
            }else{
                //Chefu's turn
                //remove largest numbers
                siz = cards_v.size();
                for(int j=0;j<siz-B[i-1];j++){
                    high = 0;
                    for(int l=0;l<cards_v.size();l++){
                        if(cards_v[high]<cards_v[l])
                            high = l;
                    }
                    cards_v.erase(cards_v.begin()+high);
                }
                
            }
        } 
        
        for(int i=0;i<cards_v.size();i++){
            sum = sum + cards_v[i];
        } 
        cout<<sum<<endl;
        
    }
    
	return 0;
}
