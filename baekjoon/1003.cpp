/*****************************************************************
*
* 백준 1003번 피보나치 함수
* 
* 반복문을 줄여서 시간을 확보하는 게 중요.
*
*****************************************************************/

#include <iostream>

int zero = 0;
int one = 0;

int fibonacci(int n) {
    if (n == 0) {
        zero++;
        return 0;
    } else if (n == 1) {
        one++;
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
	int num = 0;
	std::cin >> num;

	for (int i = 0; i < num; i++)
	{
		int fibo = 0;
		std::cin >> fibo;
		fibonacci(fibo);

		std::cout << zero << " " << one << std::endl;
		zero = 0;
		one = 0;
	}

	return 0;
}

