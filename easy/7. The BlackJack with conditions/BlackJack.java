import java.util.Scanner

class BlackJack {
	public static void main(String[] arguments) {
		Scanner scanner = new Scanner(System.in);

		int card1 = scanner.nextInt();
		card1 = (card1 == 11) ? 1 : card1;
		int card2 = scanner.nextInt();
		card2 = (card2 == 11) ? 1 : card2;
		int blackjack = card1 + card2;

		System.out.println(blackjack > 21 ? 0 : blackjack);
	}
}
		