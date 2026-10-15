#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for (const vector<int> &query : queries) {
        for (int j = query[0]; j <= query[1]; j++) {
            if (j % query[2] == 0) {
                arr[j]++;
            }
        }
    }
    
    return arr;
}