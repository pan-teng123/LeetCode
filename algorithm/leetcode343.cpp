//
// Created by HUAWEI on 2024/1/4.
//
using namespace std;
#include <vector>
int integerBreak(int n) {
    if(n==2){
        return 1;
    }
    if(n==3){
        return 2;
    }
    int dp[n+1];
    for (int i = 0; i <=n ; ++i) {
        dp[i]=0;
    }
    dp[2]=1;
    dp[3]=2;
    for (int i = 4; i <= n; ++i) {
        for (int j = 1; j <=i/2 ; ++j) {
            int c1,c2=0;
            if(i-j<4){
                c1=i-j;
            } else{
                c1=dp[i-j];
            }
            if(j<4){
                c2=j;
            } else{
                c2=dp[j];
            }
            dp[i]= max(dp[i],c1*c2);
        }
    }
    return dp[n];
}