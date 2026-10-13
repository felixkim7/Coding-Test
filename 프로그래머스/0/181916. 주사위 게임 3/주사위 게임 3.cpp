#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;
    
    if (a == b && b == c && c == d) {
        answer = a * 1111;
    }
    
    else {
        vector<int> nums = {a, b, c, d};
        sort(nums.begin(), nums.end());
        
        if (nums[0] == nums[1] || nums[1] == nums[2] || nums[2] == nums[3]) {
            if (nums[0] == nums[2]) {
                answer = (nums[0] * 10 + nums[3]) * (nums[0] * 10 + nums[3]);
            }
            
            else if (nums[1] == nums[3]) {
                answer = (nums[1] * 10 + nums[0]) * (nums[1] * 10 + nums[0]);
            }
            
            else if(nums[0] == nums[1] && nums[2] == nums[3]) {
                answer = (nums[0] + nums[2]) * (nums[2] - nums[0]);
            }
            
            else if (nums[0] == nums[1]) {
                answer = nums[2] * nums[3];
            }
            
            else if (nums[1] == nums[2]) {
                answer = nums[0] * nums[3];
            }
            
            else if (nums[2] == nums[3]) {
                answer = nums[0] * nums[1];
            }
        }
        
        else {
            answer = nums[0];
        }
    }
    
    return answer;
}