#include <iostream>
#include <vector>
# define DN	10007

int main()
{	
	int n = 0;
	int DP[1001];

	std::cin >> n;

	DP[1] = 1;
	DP[2] = 2;
	for (int i = 3; i <= n; i++) {
		DP[i] = DP[i - 1] + DP[i - 2];
		DP[i] %= DN;
	}
	
	std::cout << DP[n];
	return 0;
}

