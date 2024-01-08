//
// Created by HUAWEI on 2024/1/8.
//

using namespace std;
#include <vector>
#include <string>

vector<vector<string>>res;
vector<string>combine;
string pattern;
bool judge(string pattern){
    int l=0,r=pattern.size()-1;
    while (l<=r){
        if(pattern[l]!=pattern[r]){
            return false;
        }
        l++;
        r++;
    }
    return true;
}

void backtracking(string s,int start){
    if(!pattern.empty()){
        if(judge(pattern)){
            combine.push_back(pattern);
        }
    }
    for (int i = start; i <s.size() ; ++i) {
        pattern.push_back(s[i]);
        backtracking(s,i+1);
        pattern.pop_back();
    }
}

vector<vector<string>> partition(string s) {
    backtracking();
}