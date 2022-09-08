/*************************************************************************************
*                                                                                    *
*  Date : 2022 / 09 / 08 (Tue)                                                       *
*  Author : objectio                                                                 *
*  Detail : 각 자릿수를 모두 더한 수와 나누어떨어지는 하샤드 수를 판별하는 solution 구현  *
*                                                                                    * 
*************************************************************************************/

#include <string>
#include <vector>

using namespace std;

int is_harshad(int x)
{
    int de_ret = 0;
    
    if (x < 1 || x > 10000)
        return (1);
    de_ret = (x / 1000) + ((x % 1000) / 100) + (((x % 1000) % 100) / 10) + ((((x % 1000) % 100) % 10) / 1);
    return (de_ret);
}

bool solution(int x) {
    bool answer = true;
    
    int harshad = is_harshad(x);
    if (x % harshad != 0)
        answer = false;
    else
        answer = true;
    
    return answer;
}