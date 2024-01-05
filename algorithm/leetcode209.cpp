//
// Created by HUAWEI on 2023/12/31.
//
using namespace std;
#include <vector>
int minSubArrayLen(int target, vector<int>& nums) {
    int count=nums.size()+1;
    int l=0,r=1;
    int sum=nums[0];
    bool flag= false;
    while (l<r){
        while(sum<target){
            if(r>=nums.size()){
                flag= true;
                break;
            } else{
                sum+=nums[r];
                r++;
            }
        }
        if(flag)break;
        count= min(count,r-l);
        sum-=nums[l];
        l++;
    }
    if(count<=nums.size()){
        return count;
    } else{
        return 0;
    }

}

