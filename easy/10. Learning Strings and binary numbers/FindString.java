import java.util.Scanner;

class FindString {
	public static void main(String[] arguments) {
		Scanner scanner = new Scanner(System.in);
		String[] strings = scanner.nextLine().split(" ");
		System.out.println(strings[0].contains(strings[1]) ? 1 : 0);
	}
}