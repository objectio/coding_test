/***************************************************************************************
*                                                                                      *
*  Date : 2022 / 09 / 09 (Fri)                                                         *
*  Author : objectio                                                                   *
*  Detail : Collatz Conjecture(특정 작업을 반복하면 모든 수를 1로 만들 수 있다는 추측)을   *
*           구현하는 문제이다.                                                          *
*                                                                                      * 
****************************************************************************************/

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long lnum = num;
    
    while (lnum != 1)
    {
        if (answer == 500)
        {
            answer = -1;
            break;
        }
        if (lnum % 2 == 0)
            lnum = lnum / 2;

        else if (lnum % 2 != 0)
            lnum = lnum * 3 + 1;
        answer++;
    }
    return answer;
}