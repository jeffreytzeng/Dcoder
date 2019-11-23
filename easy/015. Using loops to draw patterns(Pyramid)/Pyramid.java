class Pyramid {
	public static void main(String[] arguments) {
		for (int loop = 0, space = 4; loop < 5; loop++, space--) {
			System.out.println(" ".repeat(space) + "*".repeat(loop*2+1));
        }
	}
}