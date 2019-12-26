import java.util.Scanner;
import java.math.BigInteger;

public class bigIntegerGCD
{
	static BigInteger fact(int N)
	{
		BigInteger b = new BigInteger("1");

		for(int i=2 ;i<=N;i++)
			b= b.multiply(BigInteger.valueOf(i));

		return b;
	}

	static void big()
	{
		BigInteger b0 = new BigInteger("15");
		BigInteger b1 = new BigInteger.valueOf(5);
		System.out.println(b1.gcd(b0));
	}



	public static void main(String args[])
	{
		big();
		// Scanner sc=new Scanner(System.in);
		// BigInteger b = sc.nextBigInteger();
		//System.out.println(fact(500));
	}
}