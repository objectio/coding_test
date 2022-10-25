/**********************************************************************************
*                                                                                 *
*  Date : 2022 / 09 / 28 (Wed)                                                    *
*  Author : objectio                                                              *
*  Detail : seoul의 요소 중 "Kim"의 위치를 찾아 그 위치를 반환하는 함수를 작성
*                                                                                 * 
**********************************************************************************/

#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    
    int i = 0;
    while (i < seoul.size())
    {
        if (seoul[i] == "Kim") {
            answer = "김서방은 " + to_string(i) + "에 있다";
        }
        i++;
    }
    
    return answer;
}