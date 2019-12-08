public class PartitionSort {
	private Integer[] array;
	private int total;

	public PartitionSort(int size) {
		this.total = 0;
		array = new Integer[size];
	}

	public void CheckCorrect() {
		boolean correct = true;
		for (int i = 0; i < total-1; i++) {
			if (array[i] > array[i+1]) {
				correct = false;
				break;
			}
		}
		System.out.println(correct);
	}

	public void Insert(int number) {
		array[total++] = number;
	}

	private int Partition(int start, int end, int pivot) {
		int left = start-1;
		int right = end;

		while (true) {
			while (left < end && array[++left] < array[pivot]) {
			}
			while (right > start && array[--right] > array[pivot]) {
			}

			if (left >= right) {
				break;
			} else {
				Swap(left, right);
			}
		}
		Swap(left, pivot);
		return left;
	}

	public void Show() {
		for (int i = 0; i < total; i++) {
			System.out.print(i == total-1 ? array[i] : array[i] + " ");
		}
		System.out.println();
	}

	public void Sort() {
		SortArray(0, total-1);
	}

	private void SortArray(int start, int end) {
		if (end - start >= 0) {
			int partition = Partition(start, end, end);
			SortArray(start, partition-1);
			SortArray(partition+1, end);
		}
	}

	private void Swap(int left, int right) {
		int temp = array[left];
		array[left] = array[right];
		array[right] = temp;
	}
}
