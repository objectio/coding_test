/**********************************************************************************
*                                                                                 *
*  Date : 2022 / 09 / 26 (Mon)                                                    *
*  Author : objectio                                                              *
*  Detail : array의 요소 중 divisor로 떨어지는 것들을 오름차순으로 answer에 담는다.
*			만약 나누어 떨어지는 수가 하나도 없다면 answer에 -1을 담아 반환한다.
*                                                                                 * 
**********************************************************************************/

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    int cnt = 0;
    
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % divisor == 0)
        {
            answer.push_back(arr[i]);
            cnt++;
        }
    }
    
    if (cnt == 0)
        answer.assign(1, -1);
    else {
        sort(answer.begin(), answer.end());
    }
    
    return answer;
}