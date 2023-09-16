#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    int num = n;
    
    for (int i = 100000000; i > 1; i /= 10) {
        answer += num / i;
        num = num % i;
    }
    answer += num;

    return answer;
}
