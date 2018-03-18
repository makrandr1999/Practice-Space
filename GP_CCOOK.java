import java.io.*;
import java.util.*;
 
class C {
 
    public static void main(String args[]){
    
        Scanner in=new Scanner(System.in);
        int t=in.nextInt();
        
        while(t-->0){
        
            int a[]=new int[5];
            int c=0;
            for(int i=0;i<5;i++){
            
                a[i]=in.nextInt();
                if(a[i]==1)
                    c++;
            }
            
            if(c==0)
                System.out.println("Beginner");
            else if(c==1)
                System.out.println("Junior Developer");
            else if(c==2)
                System.out.println("Middle Developer");
            else if(c==3)
                System.out.println("Senior Developer");
            else if(c==4)
                System.out.println("Hacker");
            else
                System.out.println("Jeff Dean"); //LOL....LOL
                
        }
    }
}
