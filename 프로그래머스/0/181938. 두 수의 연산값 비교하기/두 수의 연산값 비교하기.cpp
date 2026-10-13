#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    string sa = to_string(a);
    string sb = to_string(b);\
    sa += sb;
    
    int temp = stoi(sa);
    
    int temp2 = 2 * a * b;
    if (temp >= temp2) {
        return temp;
    }
        
    
    return temp2;
}