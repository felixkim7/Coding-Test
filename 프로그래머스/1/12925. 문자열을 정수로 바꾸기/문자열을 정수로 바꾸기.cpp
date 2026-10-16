#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    string temp ="";
    int answer = 0;
    if(s[0] == '-') {
        temp = s.substr(1, s.length());
        answer = -stoi(temp);
    }
    else if (s[0] == '+') {
        temp = s.substr(1, s.length());
        answer = stoi(temp);
    }
    else {
        answer = stoi(s);
    }
    
    return answer;
}