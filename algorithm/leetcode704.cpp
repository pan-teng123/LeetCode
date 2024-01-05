//
// Created by HUAWEI on 2023/12/29.
//
using namespace std;
#include <vector>

int search(vector<int> &nums, int target) {
    int n=nums.size();
    int low=0;
    int high=n-1;
    while (low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target)return mid;
        else if(nums[mid]<target) low=mid+1;
        else high=mid-1;
    }
    return -1;
}
