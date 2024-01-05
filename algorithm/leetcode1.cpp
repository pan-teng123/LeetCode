//
// Created by HUAWEI on 2024/1/1.
//
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> a;
    vector<int> res;
    for (int i = 0; i < nums.size(); ++i) {
        auto iter = a.find(target - nums[i]);
        if (iter != a.end()) {
            return {iter->second,i};
        } else {
            a.insert(pair<int,int>(nums[i],i));
        }
    }
    return res;
}