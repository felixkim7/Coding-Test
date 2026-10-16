#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long low = min(a, b);
    long long high = max(a, b);

    return (low + high) * (high - low + 1) / 2;
}