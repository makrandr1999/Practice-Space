#include <iostream>

using namespace std;

int main() {
    int tc; //test cases
    cin>>tc;
    int t; //transitions
    
    while(tc--){
        int a[10];
        int number;
        t=0;
        cin>>number;
        
        //splitting number into individual digits
        for(int i =0;i<8;i++){
            a[i] = number%10;
            number /= 10;
        }
        
        //comparing each digit with the next one
        for(int i=0;i<7;i++){
            if(a[i]!=a[i+1]){
                t++;
            }
        } 
        
        if(t<3){
            cout<<"uniform\n";
        }else{
            cout<<"non-uniform\n";
        } 
    }
    
	return 0;
}
