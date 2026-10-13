#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int solution(int a, int b, int c) {
    
    int answer = 0;
    
    if (a == b && b == c) {
        answer = (a+b+c)*(pow(a, 2)+pow(b, 2)+pow(c, 2))*(pow(a, 3)+pow(b, 3)+pow(c, 3));
    }
    
    else {
        vector<int> nums = {a, b, c};
        sort(nums.begin(), nums.end());
        
        if (nums[0] == nums[1] || nums[1] == nums[2]) {
            answer = (a+b+c)*(pow(a, 2)+pow(b, 2)+pow(c, 2));
        }
        else {
            answer = (a+b+c);
        }
    }
    return answer;
}