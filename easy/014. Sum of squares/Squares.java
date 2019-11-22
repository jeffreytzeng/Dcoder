import java.util.Scanner;

class Squares {
	public static void main(String[] arguments) {
		Scanner input = new Scanner(System.in);
		int from = input.nextInt();
		int end = input.nextInt();
		int total = 0;
		for (int i = from; i <= end; i++) {
			total += Math.pow(i, 2);
		}
		System.out.print(total);
	}
}