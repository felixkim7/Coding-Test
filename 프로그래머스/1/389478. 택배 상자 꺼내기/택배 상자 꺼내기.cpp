#include <string>
#include <vector>

using namespace std;

int solution(int n, int w, int num) {
    int total_rows = (n-1) / w + 1;
    int box_row = (num-1) / w + 1;
    
    
    int box_col = 0;
    int fin_col = 0;
    int answer = 0;
    
    if (box_row % 2 == 1) {
        box_col = num % w;
        if(num % w == 0) {
            box_col = w;
        }
    }
    
    else {
        box_col = w - (num % w) + 1;
        if(num % w == 0) {
            box_col = 1;
        }
    }
    
    if (total_rows % 2 == 1) {
        fin_col = n % w;
        if(fin_col == 0) {
            fin_col = w;
        }
        if (fin_col < box_col) {
            answer = total_rows - box_row;
        }

        else {
            answer = total_rows - box_row + 1;
        }
        
        
    }
    
    else {
        fin_col = w - (n % w) + 1;
        if(n % w == 0) {
            fin_col = 1;
        }
        if (fin_col <= box_col) {
            answer = total_rows - box_row + 1;
        }

        else {
            answer = total_rows - box_row;
        }
        
    }
    
    

    
    
    
    
    return answer;
}