//
// Created by HUAWEI on 2023/12/29.
//
using namespace std;
#include <vector>
#include <math.h>
vector<int> sortedSquares(vector<int>& nums) {
    int low=0,high=nums.size()-1;
    int index=nums.size()-1;
    vector<int>result(nums.size(),0);
    while (low<=high){
        if(abs(nums[high])>= abs(nums[low])){
            result[index]= nums[high]*nums[high];
            high--;
            index--;
        } else{
            result[index]= nums[low]*nums[low];
            low++;
            index--;
        }
    }
    return result;
}
