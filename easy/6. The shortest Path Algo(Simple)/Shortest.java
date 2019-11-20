//import java.lang.Math;
import java.util.Scanner;

class Shortest {
	public static void main(String[] arguments) {
		Scanner scanner = new Scanner(System.in);
		int coordinates[] = {0, 0, 0, 0};

		for (int i = 0; i < 4; i++) {
			coordinates[i] = scanner.nextInt();
		}

		double dist_A = Math.sqrt(Math.pow(coordinates[0], 2) + Math.pow(coordinates[1], 2));
		double dist_B = Math.sqrt(Math.pow(coordinates[2], 2) + Math.pow(coordinates[3], 2));

		System.out.println(dist_A > dist_B ? "B" : "A");
	}
}