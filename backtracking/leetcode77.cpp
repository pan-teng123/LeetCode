//
// Created by HUAWEI on 2024/1/4.
//
#include <vector>
using namespace std;
vector<vector<int>> res;
vector<int> path;

void backtrace(int n, int k, int start)
{
    if (path.size() == k)
    {
        res.push_back(path);
        return;
    }
    for (int i = start; i <= n; i++)
    {
        path.push_back(i);      // 处理节点
        backtrace(n, k, i + 1); // 递归
        path.pop_back();        // 回溯，撤销处理的节点
    }
}

vector<vector<int>> combine(int n, int k)
{
    backtrace(n, k, 1);
    return res;
}
