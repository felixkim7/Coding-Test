#include <string>
#include <vector>

using namespace std;

string solution(string rny_string) {
    int i = 0;
    while(true) {
        if(i > rny_string.length()) {
            break;
        }
        if (rny_string[i] == 'm') {
            rny_string.replace(i, 1, "rn");
        }
        i++;
        
    }
    
    // string answer = "";
    return rny_string;
}