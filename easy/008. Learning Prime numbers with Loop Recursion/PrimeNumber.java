import java.util.Scanner;
import java.util.ArrayList;

class PrimeNumber {
	public static void main(String[] arguments) {
		Scanner scanner = new Scanner(System.in);
		int from = scanner.nextInt();
		int end = scanner.nextInt();

		ArrayList<Integer> alist = new ArrayList<Integer>();

		for (int check = from; check <= end; check++) {
			if (check != 1) {
				boolean prime = true;
				for (int natual_number = 2; natual_number < check; natual_number++) {
					if (check % natual_number == 0) {
						prime = false;
						break;
					}
				}

				if (prime) {
					alist.add(check);
				}
			}
		}

		for (int number = 0; number < alist.size(); number++) {
			System.out.println(alist.get(number));
		}
	}
}