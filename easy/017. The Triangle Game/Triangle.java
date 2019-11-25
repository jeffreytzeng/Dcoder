import java.util.Scanner;

class Triangle {
	public static void main(String[] argv) {
		Scanner input = new Scanner(System.in);
		char[] words = input.nextLine().toCharArray();

		for (int i = 0; i < words.length; i++) {
			for (int length = 0; length <= i; length++) {
				System.out.print(words[length]);
			}
			System.out.println("");
		}
	}
}