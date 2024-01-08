#include <iostream>
using namespace std;
#include <vector>

vector<vector<int>> res;
vector<int> path;

void backtracking(int k, int n, int sum, int start)
{
    if (path.size()==k)
    {
        if(sum==n){
            res.push_back(path);
        }
        return;
    }
    else
    {
        for (int i = start; i <=9; i++)
        {
            sum += i;
            path.push_back(i);
            backtracking(k, n,sum, i + 1);
            path.pop_back();
            sum -=i;
        }
        return;
    }
}

vector<vector<int>> combinationSum3(int k, int n)
{
    backtracking(k, n, 0, 1);
    return res;
}
