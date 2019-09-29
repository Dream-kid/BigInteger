import java.util.Scanner; // inside package java.util
import java.math.BigInteger; // inside package java.math

class Main /* UVa 10925 - Krakovia */
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int caseNo = 1;
		while (true) {
			int N = sc.nextInt(), F = sc.nextInt(); // N bills, F friends
			if (N == 0 && F == 0)
				break;
			BigInteger sum = BigInteger.ZERO; // BigInteger has this constant
			for (int i = 0; i < N; i++) // sum the N large bills
			{
				BigInteger V = sc.nextBigInteger(); // for reading next BigInteger!
				sum = sum.add(V); // this is BigInteger addition
			}
			System.out.println("Bill #" + (caseNo++) + " costs " + sum + ": each friend should pay "
					+ sum.divide(BigInteger.valueOf(F)));
			System.out.println(); // the line above is BigInteger division
		} // divide the large sum to F friends
	}
}
