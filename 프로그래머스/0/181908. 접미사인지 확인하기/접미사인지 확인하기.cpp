#include <string>
#include <vector>
#include <cctype>
#include <algorithm>


using namespace std;

int solution(string my_string, string is_suffix) {
    vector<string> substrs;
    for (int i = 0; i < my_string.size(); i++) {
        substrs.push_back(my_string.substr(i));
    }
    
    return (find(substrs.begin(), substrs.end(), is_suffix) != substrs.end());
}