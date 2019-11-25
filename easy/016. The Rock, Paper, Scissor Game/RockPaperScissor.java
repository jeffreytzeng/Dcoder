import java.util.Scanner;

class RockPaperScissor {
	public static void main(String[] arguments) {
		Scanner input = new Scanner(System.in);
		int turns = input.nextInt();
		input.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");		// Skip '\n' after integer.
		char[] competes = input.nextLine().toCharArray();

		for (int turn = 0; turn < turns*2; turn += 2) {
			if (competes[turn] == competes[turn+1]) {
				System.out.println("Draw");
			} else if (competes[turn] == 'R') {
				System.out.println(competes[turn+1] == 'S' ? "Dcoder" : "You");
			} else if (competes[turn] == 'P') {
				System.out.println(competes[turn+1] == 'R' ? "Dcoder" : "You");
			} else {
				System.out.println(competes[turn+1] == 'P' ? "Dcoder" : "You");
			}
		}
	}
}