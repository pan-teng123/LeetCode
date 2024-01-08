//
// Created by HUAWEI on 2024/1/8.
//
using namespace std;
#include <vector>
#include <algorithm>

vector<vector<int>>res;
vector<int>sat ;

void backtracking(const vector<int>& candidates,int target,int sum,int start){
    if(sum==target){
        res.push_back(sat);
        return;
    } else if(sum>target){
        return;
    }
    for (int i = start; i < candidates.size(); ++i) {
        sat.push_back(candidates[i]);
        sum+=candidates[i];
        backtracking(candidates,target,sum,i);
        sum-=candidates[i];
        sat.pop_back();
    }
}


vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    sort(candidates.begin(),candidates.end());
    backtracking(candidates,target,0,0);
    return res;
}


