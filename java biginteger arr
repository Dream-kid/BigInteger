/* UVa 1646 */
import java.util.Scanner; // inside package java.util
import java.math.BigInteger; // inside package java.math

public class Main 
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		/*
		slow approach 
		arr[1] = "1";
		arr[2] = "3";
		String[] arr = new String[30000];
		BigInteger sum = new BigInteger(arr[i - 1]);
		BigInteger sum1 = new BigInteger(arr[i - 2]);
		sum = sum.add(sum1);
		arr[i] = sum.toString();
		*/
		
		BigInteger[] arr = new BigInteger[30000];
		arr[1] =new BigInteger("1");
		arr[2] = new BigInteger("3");
		int N = 10010;
		for (int i = 3; i < N; i++) {
		arr[i]=arr[i-1].add(arr[i-2]);
		}
		while (sc.hasNext()) {
			int F = sc.nextInt();
			System.out.println(arr[F]);

		}

	}
}
