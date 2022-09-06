/*************************************************************************************
*                                                                                    *
*  Date : 2022 / 09 / 06 (Tue)                                                       *
*  Author : objectio                                                                 *
*  Detail : atoi stoi atod 등 표준 라이브러리의 변환 함수를 사용하여 원하는 값을 구현.    *
*                                                                                    * 
*************************************************************************************/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int answer = 0;
    
    answer = atoi(s);
    
    return answer;
}