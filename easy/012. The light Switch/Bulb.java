import java.util.Scanner;

class Bulb {
	public static void main(String[] arguments) {
		Scanner input = new Scanner(System.in);
		int s1 = input.nextInt();
		int s2 = input.nextInt();
		System.out.println(s1 ^ s2);
	}
}