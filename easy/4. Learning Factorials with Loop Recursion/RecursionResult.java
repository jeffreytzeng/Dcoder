import java.util.Scanner;

class Recursion {
	public static int recursive(int x) {
		if (x == 0) {
			return 1;
		} else {
			return x * recursive(x - 1);
		}
	}
}

class RecursionResult {
	public static void main(String[] arguments) {
		Scanner scanner = new Scanner(System.in);
		int result = Recursion.recursive(scanner.nextInt());
		System.out.println(result);
	}
}
		