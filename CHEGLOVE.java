import java.util.*;
import java.lang.*;
import java.io.*;

class CHEGLOVE
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int test = sc. nextInt();
		int i,j;
		while(test-- > 0)
		{
			int n = sc. nextInt();
			int[] finger = new int[n];
			int[] sheath = new int[n];
			boolean front = false;
			boolean back = false;
			boolean both = false;
			
			for( i = 0; i < n; i++)
			{
				finger[i] = sc.nextInt();
			}
			for( i = 0; i < n; i++)
			{
				sheath[i] = sc.nextInt();
			}
			
			for( i = 0; i < n; i++)
			{
				if(finger[i] <= sheath[i])
					front = true;
				else {front = false; break;}
			}
			for( i = 0, j = n-1; i < n; i++, j--)
			{
				if(finger[i] <= sheath[j])
					back = true;
				else {back = false; break;}
			}
			if(front && back)
				both = true;

			if(front && !both)
				System.out.println("front");
			else if(back && !both)
					System.out.println("back");
				else if (both)
						System.out.println("both");	
					else System.out.println("none");			
		}		
	}
}
