import java.util.Scanner;

class Score {
	public static void main(String[] argv) {
		Scanner input = new Scanner(System.in);
		String[] garry = input.nextLine().split(" ");
		String[] sharry = input.nextLine().split(" ");
		int garry_get = 0;
		int sharry_get = 0;

		for (int i = 0; i < garry.length; i++) {
			garry_get += Integer.parseInt(garry[i]);
			sharry_get += Integer.parseInt(sharry[i]);
		}

        if (garry_get == sharry_get) {
            System.out.println("None 0");
        } else {
            System.out.println(garry_get > sharry_get ? 
                               "Garry " + (garry_get - sharry_get) :
                               "Sharry " + (sharry_get - garry_get));
        }
	}
}