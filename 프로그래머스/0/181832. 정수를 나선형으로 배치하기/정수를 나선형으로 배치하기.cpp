#include <string>
#include <vector>

using namespace std;

void right(vector<vector<int>>& answer, int n, int phase, int& num) {
    int k = phase / 4;
    int row = k;
    for (int col = k; col < n - k; col++) {
        answer[row][col] = num++;
    }
}

void down(vector<vector<int>>& answer, int n, int phase, int& num) {
    int k = phase / 4;
    int col = n - 1 - k;
    for (int row = k + 1; row < n - k; row++) {
        answer[row][col] = num++;
    }
    
}

void left(vector<vector<int>>& answer, int n, int phase, int& num) {
    int k = phase / 4;
    int row = n - 1 - k;
    for (int col = n - 2 - k; col >= k; col--) {
        answer[row][col] = num++;
    }
}

void up(vector<vector<int>>& answer, int n, int phase, int& num) {
    int k = phase / 4;
    int col = k;
    for (int row = n - 2 - k; row > k; row--) {
        answer[row][col] = num++;
    }
}

vector<vector<int>> solution(int n) {
    
    int phase = 0;
    int num = 1;
    
    vector<vector<int>> answer(n, vector<int>(n, 0));
    
    
    
    while(phase < 2 * n - 1) {
        if(phase % 4 == 0) {
            right(answer, n, phase, num);
        }
        
        else if(phase % 4 == 1) {
            down(answer, n, phase, num);
        }
        
        else if(phase % 4 == 2) {
            left(answer, n, phase, num);    
        }
        
        else {
            up(answer, n, phase, num);
        }
        
        phase++;
    }
    
    
    
    return answer;
}