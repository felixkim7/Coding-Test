#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    
    long long n = num;
    int calcs = 0;
    
    while(n != 1) {
        if (n == 1) break;
        
        if (n % 2 == 0) {
            n /= 2;
        }
        
        else {
            n = 3*n+1;

        }
        calcs++;
        if (calcs == 500) return -1;
    }
    
    return calcs;
}