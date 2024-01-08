//
// Created by HUAWEI on 2024/1/8.
//
using namespace std;
#include <vector>
#include <algorithm>

vector<vector<int>>res;
vector<int>sub ;

void backtracking(const vector<int> nums,int start) {
    res.push_back(sub);
    for (int i = start; i <nums.size() ; ++i) {
        sub.push_back(nums[i]);
        backtracking(nums,i+1);
        sub.pop_back();
    }
}

vector<vector<int>> subsets(vector<int>& nums) {
    backtracking(nums,0);
    return res;
}