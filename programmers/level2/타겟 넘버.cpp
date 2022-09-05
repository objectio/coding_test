/***********************************************************************************
*                                                                                  *
*  Date : 2022 / 09 / 05 (Mon)                                                     *
*  Author : objectio                                                               *
*  Detail : 깊이 우선 탐색(DFS)을 사용하여 numbers 배열의 수를 조합해 타겟 넘버를 구함  *
*                                                                                  * 
***********************************************************************************/

#include <string>
#include <vector>

using namespace std;

int dfs(vector<int> numbers, int target, int index, int num) {
	int size = numbers.size();
	if (index == size) {
		return num == target ? 1 : 0;
	}
	else {
		return dfs(numbers, target, index+1, num+numbers[index]) + dfs(numbers, target, index+1, num-numbers[index]);
	}
}

int solution(vector<int> numbers, int target) {
	int answer = 0;
	return dfs(numbers, target, 0, 0);
}