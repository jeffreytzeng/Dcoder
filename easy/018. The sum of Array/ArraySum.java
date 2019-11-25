import java.util.Scanner;

class ArraySum {
	public static void main(String[] argv) {
		Scanner input = new Scanner(System.in);

		int size = input.nextInt();
		input.skip("\n");
		int[] numbers = new int[size];

		for (int i = 0; i < size; i++) {
			numbers[i] = input.nextInt();
		}

		int result = 0;
		for (int i = 0; i < size; i++) {
			result += numbers[i];
		}

		System.out.print(result);
	}
}