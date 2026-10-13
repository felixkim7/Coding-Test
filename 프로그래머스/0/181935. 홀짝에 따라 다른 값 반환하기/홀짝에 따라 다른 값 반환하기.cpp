#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    if (n % 2 == 0) {
        int k = n / 2;
        
        answer = 2*k*(k+1)*(2*k+1)/3;
    }
    else {
        answer = (n / 2 + 1) * (n / 2 + 1);
    }
    return answer;
}