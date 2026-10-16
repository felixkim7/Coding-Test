#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    sort(d.begin(), d.end());
    int answer = 0;
    int i = 0;
    while(i < d.size()) {
        budget -= d[i];
        if (budget < 0) {
            break;
        }
        answer++;
        i++;
        
    }
    
    return answer;
}