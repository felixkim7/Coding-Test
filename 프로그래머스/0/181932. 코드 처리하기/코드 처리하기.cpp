#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string ret = "";
    int mode = 0;
    
    
    for (int i = 0; i < code.length(); i++) {
        if (code[i] == '1') {
            if(mode == 0) {
                mode = 1;
            }
            else {
                mode = 0;
            }
            continue;
        }
             
        else if ((mode == 0 && (i % 2 == 0)) || (mode == 1 && (i % 2 == 1))) {
            ret.push_back(code[i]);
        }
        
    }
    if(ret.length() == 0) {
        ret.insert(0, "EMPTY");
    }
    return ret;
}