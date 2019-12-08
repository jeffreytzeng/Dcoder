import java.util.Scanner;

class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		PartitionSort numbers = new PartitionSort(n);

		for (int i = 0; i < n; i++) {
			numbers.Insert(input.nextInt());
		}

		numbers.Sort();
		numbers.Show();
	}
}