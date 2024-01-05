//
// Created by HUAWEI on 2024/1/4.
//

using namespace std;
#include <vector>
int uniquePaths(int m, int n) {
    if(m==1||n==1){
        return 1;
    }
    int dp[m+1][n+1];
    for (int i = 1; i <=n ; ++i) {
        dp[1][i]=1;
    }
    for (int i = 1; i <=m ; ++i) {
        dp[i][1]=1;
    }
    for (int i = 2; i <=m; ++i) {
        for (int j = 2; j <=n ; ++j) {
            dp[i][j]=dp[i-1][j]+dp[i][j-1];
        }
    }
    return dp[m][n];
}
