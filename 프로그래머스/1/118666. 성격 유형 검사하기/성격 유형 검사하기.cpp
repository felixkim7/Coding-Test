#include <string>
#include <vector>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    
    double rt = 4;
    double cf = 4;
    double jm = 4;
    double an = 4;
    
    int rtnum = 0;
    int cfnum = 0;
    int jmnum = 0;
    int annum = 0;
    
    
    for (int i = 0; i < survey.size(); i++) {
        if(survey[i] == "AN") {
            an += choices[i];
            annum++;
        }
        
        else if(survey[i] == "NA") {
            an += 8 - choices[i];
            annum++;
        }
        
        else if(survey[i] == "RT") {
            rt += choices[i];
            rtnum++;
        }
        
        else if(survey[i] == "TR") {
            rt += 8 - choices[i];
            rtnum++;
        }
        
        else if(survey[i] == "CF") {
            cf += choices[i];
            cfnum++;
        }
        
        else if(survey[i] == "FC") {
            cf += 8 - choices[i];
            cfnum++;
        }
        
        else if(survey[i] == "JM") {
            jm += choices[i];
            jmnum++;
        }
        
        else if(survey[i] == "MJ") {
            jm += 8 - choices[i];
            jmnum++;
        }
    }
    
    rt /= rtnum + 1;
    an /= annum + 1;
    cf /= cfnum + 1;
    jm /= jmnum + 1;
    
    string answer = "";
    
    if(rt <= 4) {
        answer.push_back('R');
    }
    
    else {
        answer.push_back('T');
    }
    
    if(cf <= 4) {
        answer.push_back('C');
    }
    
    else {
        answer.push_back('F');
    }
    
    if(jm <= 4) {
        answer.push_back('J');
    }
    
    else {
        answer.push_back('M');
    }
    
    if(an <= 4) {
        answer.push_back('A');
    }
    
    else {
        answer.push_back('N');
    }
    
    
    return answer;
}