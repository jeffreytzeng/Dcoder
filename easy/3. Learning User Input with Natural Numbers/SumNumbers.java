import java.util.Scanner;

class SumNumbers {
	public static void main(String[] arguments) {
		Scanner scanner = new Scanner(System.in);
		int integer = scanner.nextInt();
		int total = 0;

		for (int i = 0; i <= integer; i++) {
			total += i;
		}
		
		System.out.println(total);
	}
}