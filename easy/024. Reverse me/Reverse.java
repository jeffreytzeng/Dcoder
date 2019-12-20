import java.util.Scanner;

public class Reverse {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String str = input.nextLine();
		char[] chars = new char[str.length()];

		for (int i = 0; i < str.length(); i++) {
			chars[i] = str.charAt(str.length() - i - 1);
		}

		str = new String(chars);
		System.out.println(Integer.parseInt(str));
	}
}