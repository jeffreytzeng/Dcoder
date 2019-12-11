import java.util.*;

class Same {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String name = input.nextLine();
		String reversed_name = new StringBuilder(name).reverse().toString();
		System.out.println(reversed_name.equals(name) ? "Yes" : "No");
	}
}