#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    
    int answer = 0;
    
    int list_mult = 1;
    
    int list_sum = 0;
    
    for (int i = 0; i < num_list.size(); i ++) {
        list_sum += num_list[i];
    }
    
    for (int i = 0; i < num_list.size(); i++) {
        list_mult *= num_list[i];
    }
    
    list_sum = list_sum * list_sum;
    
    if (list_mult < list_sum) {
        answer = 1;
    }
    
    return answer;
}