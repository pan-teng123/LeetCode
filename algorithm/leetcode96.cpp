//
// Created by HUAWEI on 2024/1/4.
//
#include <vector>
using namespace std;
int numTrees(int n) {
    vector<int>dp(n+1,0);
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;
    for (int i = 3; i <=n ; ++i) {
        for (int j = 0; j <i ; ++j) {
            dp[i]+=dp[j]*dp[i-1-j];
        }
    }
    return dp[n];
}
