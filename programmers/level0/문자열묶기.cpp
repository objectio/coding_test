#include <string>
#include <vector>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    vector<int> count(30);
    
    for(int i = 0; i < strArr.size(); i++) {
        count[strArr[i].size() - 1] += 1;
    }
    
    for (int i = 0; i < count.size(); i++) {
        if (answer < count[i])
            answer = count[i];
    }
    
    return answer;
}
