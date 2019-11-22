import java.util.Scanner;

class SwapItem {
	int number;
	SwapItem(int number) {this.number = number;}
}

class SortWithIfElse {
	static void Swap(SwapItem x, SwapItem y) {
		int temp = x.number;
		x.number = y.number;
		y.number = temp;
	}

	public static void main(String[] arguments) {
		Scanner scanner = new Scanner(System.in);

		SwapItem number1 = new SwapItem(scanner.nextInt());
		SwapItem number2 = new SwapItem(scanner.nextInt());
		SwapItem number3 = new SwapItem(scanner.nextInt());

		if (number1.number > number2.number) {
			Swap(number1, number2);

			if (number2.number > number3.number) {
				Swap(number2, number3);

				if (number1.number > number2.number) {
					Swap(number1, number2);
				}
			}
		} else {
			if (number2.number > number3.number) {
				Swap(number2, number3);

				if (number1.number > number2.number) {
					Swap(number1, number2);
				}
			}
		}

		System.out.print(number1.number + " " + number2.number + " " + number3.number);
	}
}
