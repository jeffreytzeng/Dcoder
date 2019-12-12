import java.util.Scanner;

class Students {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int total_cases = input.nextInt();
		int[] students = new int[total_cases];

		for (int i = 0; i < total_cases; i++) {
			input.skip("\n");
			students[i] = input.nextInt();
		}

		for (int i = 0; i < total_cases; i++) {
			System.out.println(students[i]/2 + " " + (students[i]/2 + students[i]%2));
		}
	}
}