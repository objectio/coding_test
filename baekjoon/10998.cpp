#include <iostream>
using namespace std;

int main() {
	int A, B;
	cin >> A >> B;
	if (A <= 0 || B >= 10) return -1;

	printf("%d", A * B);

	return 0;
}