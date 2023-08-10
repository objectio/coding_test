#include <iostream>
#include <vector>

int map[129][129];
int w_cnt = 0, b_cnt = 0; 

void divide_and_conquer()
{
	int tmp_cnt = 0;
	for (int i = x; i < x + N; i++) {
		for (int j = y; j < y + N; j++) {
			if (map[i][j]) {
				tmp_cnt++;
			}
		}
	}
	if (!tmp_cnt) w_cnt++; // no count
	else if (tmp_cnt == N * N) b_cnt++; // all count
	else {
		divide_and_conquer(x, y, N / 2);  // left top
		divide_and_conquer(x, y + N / 2, N / 2); // right top
		divide_and_conquer(x + N / 2, y, N / 2); // left bottom
		divide_and_conquer(x + N / 2, y + N / 2, N / 2); // right bottom
	}
	return;
}

int main()
{
	int size = 0;
	std::cin >> size;

	std::vector<std::vector<int>> mat;
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			std::cin >> mat[i][j];

	divide_and_conquer();

	return 0;
}