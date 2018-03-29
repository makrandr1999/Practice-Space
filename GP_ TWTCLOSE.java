/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Arrays;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int k = sc.nextInt();
		int x,c = 0;
		int[] a = new int[n];
		String ip;
		while(k-- > 0)
		{
		    ip = sc.next();
		    if(ip.equals("CLOSEALL"))
            {
                Arrays.fill(a,0);
                c = 0;
                System.out.println(c);
            }
            else if(ip.equals("CLICK")){
                x = sc.nextInt();
                if(a[x-1] == 0)
                {
                    a[x-1] = 1;
                    c++;
                    System.out.println(c);
                }else {
                        a[x-1] = 0;
                        c--;
                        System.out.println(c);
                    }
            }    
		}
	}
}
