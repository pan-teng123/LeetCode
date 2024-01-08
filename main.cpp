#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<vector<int>> subsets(vector<int> &nums);
int main()
{
    vector<int> candidates = {1, 2, 3};
    vector<vector<int>> res = subsets(candidates);
    for (size_t i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); ++j)
        {
            cout << res[i][j];
        }
        cout << endl;
    }
    return 0;
}
