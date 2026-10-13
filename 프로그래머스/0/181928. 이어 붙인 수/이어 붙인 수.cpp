#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(vector<int> num_list) {
    string odd;
    string even;
    int even_num;
    int odd_num;
    for (int i = 0; i < num_list.size(); i++) {
        if (num_list[i] % 2) {
            odd += to_string(num_list[i]);
        }
        else {
            even += to_string(num_list[i]);
        }
    }
    
    odd_num = stoi(odd);
    even_num = stoi(even);
    
    return odd_num + even_num;
}