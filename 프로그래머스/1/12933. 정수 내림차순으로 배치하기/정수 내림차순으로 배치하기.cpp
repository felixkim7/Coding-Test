#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

long long solution(long long n) {
    vector<int> arr;
    while(n) {
        arr.push_back(n%10);
        n/=10;
    }
    sort(arr.begin(), arr.end());
    long long answer = 0;
    for (int i = 0; i < arr.size(); i++) {
        answer += arr[i] * pow(10, i);
    }
    return answer;
}