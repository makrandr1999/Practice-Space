#include <stdio.h>
#include <stdbool.h>
 
int main(void) {
	int T=0;
	scanf("%d",&T);
	while(T-- > 0){
	    int n=0;
	    bool front = true,back = true;
	    scanf("%d",&n);
	    unsigned int l[n],g[n];
	    for(int i=0;i<n;i++){
	        scanf("%u",&l[i]);
	    }
	    for(int i=0;i<n;i++){
	        scanf("%u",&g[i]);
	    }
	    for (int i=0;i<n;i++){
	        if(l[i]>g[i]){
	            front =false;
	            break;
	        }
	    }
	    int j=n-1;
	    for (int i=0;i<n;i++){
	        if(l[j--]>g[i]){
	            back =false;
	            break;
	        }
	    }
	    if(front && back){
	        printf("both\n");
	    }
	    else if(front && !back){
	        printf("front\n");
	    }
	    else if(!front && back){
	        printf("back\n");
	    }
	    else{
	        printf("none\n");
	    }
	    
	    
	    
	}
	return 0;
} 
