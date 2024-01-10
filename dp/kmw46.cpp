#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int M, N;
    cin >> M >> N;
    int space[M];
    int value[M];

    for (int i = 0; i < M; i++)
    {
        cin >> space[i];
    }
    for (int i = 0; i < M; i++)
    {
        cin >> value[i];
    }

    int dp[M][N + 1];

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N + 1; ++j)
        {
            dp[i][j] = 0;
        }
    }
    for (int i = 0; i < N + 1; i++)
    {
        if (space[0] <= N)
        {
            dp[0][i] = value[0];
        }
        else
        {
            dp[0][i] = 0;
        }
    }

    for (int i = 1; i < M; i++)
    {
        for (int j = 0; j < N + 1; j++)
        {
            if (j - space[i] >=0)
            {
                dp[i][j] = max(dp[i - 1][j], dp[i-1][j - space[i]] + value[i]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[M - 1][N] << endl;

    return 0;
}
