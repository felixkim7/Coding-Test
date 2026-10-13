#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int a, int b) {
    
    string astring = to_string(a);
    string bstring = to_string(b);
    
    string temp1 = astring+bstring;
    string temp2 = bstring+astring;
    
    int temp11 = stoi(temp1);
    int temp22 = stoi(temp2);
    
    if(temp11 > temp22) {
        return temp11;
    }
    return temp22;
}