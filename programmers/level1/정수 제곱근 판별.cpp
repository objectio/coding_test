/**********************************************************************************
*                                                                                 *
*  Date : 2022 / 09 / 27 (Tue)                                                    *
*  Author : objectio                                                              *
*  Detail : 임의의 양수 n이 정수 x의 제곱일 경우 (x + 1)^2 리턴. 
*			만약 제곱 관계가 성립되지 않는다면 answer에 -1을 담아 반환한다.
*                                                                                 * 
**********************************************************************************/

#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    answer = -1;
    for (long long i = 0; i < 1000000; i++)
    {
        if (sqrt(n) == i)
            answer = (i + 1) * (i + 1);
    }
    
    return answer;
}