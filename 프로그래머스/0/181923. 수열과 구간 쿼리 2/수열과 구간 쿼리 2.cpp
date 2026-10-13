#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for (int i = 0; i < queries.size(); i++) {
        int result = -1;
        for (int j = queries[i][0]; j <= queries[i][1]; j++) {
            if (queries[i][2] < arr[j]) {
                if (result == -1 || arr[j] < result) {
                    result = arr[j];
                }
                
            }
            
        }
        answer.push_back(result);
    }
    return answer;
}