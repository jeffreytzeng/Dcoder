import java.util.Scanner;

class WaterUsage {
	public static void main(String[] arguments) {
		int tank_contain = 10000;
		Scanner scanner = new Scanner(System.in);
		int usage = scanner.nextInt();

		System.out.println(tank_contain / usage);
	}
}