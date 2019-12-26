import java.util.Scanner;
import java.math.BigInteger;

//...................................................................
//...............................................................
public class bigInteger
{
	static void playWithInt()
	{
		Scanner sc=new Scanner(System.in);
		//System.out.print("Enter a integer ");
		//int s1 =sc.nesxtInt();
		//System.out.println("The square of "+s1+" is " +s1*s1);

		BigInteger one = new BigInteger("2");
		BigInteger two = new BigInteger("432435");
		System.out.println(two.add(one));

		//Reading a string as a big Integer
		String s2= sc.next();
		BigInteger three = new BigInteger(s2,2);
		System.out.println(three);		
	}
	public static void main(String args[])
	{
		playWithInt();
	}
}