#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    int temp;
    for (int i = 0; i < numLog.size() - 1; i++) {
        temp = numLog[i+1] - numLog[i];
        if (temp == 1) answer.push_back('w');
        else if (temp == -1) answer.push_back('s');
        else if (temp == 10) answer.push_back('d');
        else if (temp == -10) answer.push_back('a');
    }
    return answer;
}