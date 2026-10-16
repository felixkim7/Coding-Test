#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string accumlated;
    for (int i = my_string.size() - 1; i >= 0; i--) {
        accumlated.insert(accumlated.begin(), my_string[i]);
        answer.push_back(accumlated);
    }
    sort(answer.begin(), answer.end());
    return answer;
}