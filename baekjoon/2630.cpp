#include <iostream>
#include <vector>

class TrimPaper {
	private:
	int mat_size;
	std::vector<std::vector<int>> mat;

	public:
	TrimPaper() {}
	TrimPaper(int size, std::vector<std::vector<int>> main_mat) : mat_size(size), mat(main_mat) {}
	~TrimPaper() {}

	
};

int main()
{
	int size = 0;
	std::cin >> size;

	std::vector<std::vector<int>> mat;
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			std::cin >> mat[i][j];

	//divide_and_conquer();

	return 0;
}