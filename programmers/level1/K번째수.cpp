/****************************************************************************
* 																			*
*  Date : 2022 / 09 / 02 (Fri)												*
*  Author : objectio														*
*  Detail : 정렬 알고리즘을 사용하여 배열 array의 안에 들어있는 수 중 k번째 수를 구함		*
*																			* 
*****************************************************************************/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> arr;
    
    for (int a = 0; a < commands.size(); a++)
    {
        arr.clear();
        for (int i = commands[a][0] - 1; i <= commands[a][1] - 1; i++)
            arr.push_back(array[i]);
        
        sort(arr.begin(), arr.end());
        
        int j = 0; 
        j = commands[a][2] - 1;
        answer.push_back(arr[j]);
    }
    
    return answer;
}