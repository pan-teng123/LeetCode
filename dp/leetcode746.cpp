//
// Created by HUAWEI on 2024/1/4.
//
using namespace std;
#include <vector>
int minCostClimbingStairs(vector<int>& cost) {
    int n=cost.size();
    if(n==2) {
        return min(cost[0], cost[1]);
    }
    if(n==3){
        return min(cost[1],cost[0]+cost[2]);
    }
    vector<int>dp(n+1,0);
    dp[2]=min(cost[0], cost[1]);
    dp[3]=min(cost[1],cost[0]+cost[2]);
    for (int i = 4; i <=n ; ++i) {
        dp[i]= min(dp[i-1]+cost[i-1],dp[i-2]+cost[i-2]);
    }
    return dp[n];
}