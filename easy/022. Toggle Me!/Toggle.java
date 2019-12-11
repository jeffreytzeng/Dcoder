import java.util.*;

class Toggle {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		char[] str = input.nextLine().toCharArray();
		for (int i = 0; i < str.length; i++) {
			System.out.print(Character.isUpperCase(str[i]) ? Character.toLowerCase(str[i]) : Character.toUpperCase(str[i]));
		}
	}
}