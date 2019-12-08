#ifndef PARTITION
#define PARTITION

#include <vector>

class PartitionArray
{
	public:
		PartitionArray(int size);

		void Insert(int number);
		void Show();
		void Sort();
		void SortArray(int start, int end);

	private:
		int total_;
		std::vector<int> array_;

		int Partition(int &start, int &end, int &pivot);
		void Swap(int &left, int &right);
};


#endif