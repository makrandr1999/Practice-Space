import java.util.Scanner;
 
/**
 *
 * @author Amey
 */
public class SubSeq
{
    private static Scanner jin = new Scanner(System.in);
    public static void main(String[] args)
    {
	int T = Integer.parseInt(jin.nextLine());
        while(T-- > 0)
        {
            System.out.println(check());
        }
    }
    
    private static String check()
    {
        int A[] = new int[26];
        String S = jin.nextLine();
        for(int c = 0; c < S.length(); c++)
        {
            if(A[(int)S.charAt(c) - 97] == 1)
                return("yes");
            else
                A[(int)S.charAt(c) - 97] = 1;
        }
        return("no");
    }
} 
