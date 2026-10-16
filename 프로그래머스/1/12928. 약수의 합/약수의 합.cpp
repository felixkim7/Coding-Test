#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int n) {
    int maxTest = trunc(sqrt(n));
    int i = 1;
    int answer = 0;
    while(i <= maxTest) {
        if (i == sqrt(n)) {
            answer += i;
        }
        else if (n % i == 0) {
            answer += i;
            answer += n / i;
        }
        i++;
    }
    
    return answer;
}