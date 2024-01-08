#include<vector>
#include<string>
using namespace std;
vector<string> res;
string path;
const string letterMap[10] = {
    "",     // 0
    "",     // 1
    "abc",  // 2
    "def",  // 3
    "ghi",  // 4
    "jkl",  // 5
    "mno",  // 6
    "pqrs", // 7
    "tuv",  // 8
    "wxyz", // 9
};

void backtracking(string digits,  int index)
{
    if (index == digits.size())
    {
        res.push_back(path);
        return;
    }

    for (int i = 0; i < letterMap[(int)(digits[index] - '0')].size(); i++)
    {
        path.push_back(letterMap[(int)(digits[index] - '0')][i]);
        backtracking(digits,index + 1);
        path.pop_back();
    }
    return;
}

vector<string> letterCombinations(string digits)
{
    if(digits.size()==0){
        return res;
    }
    backtracking(digits, 0);
    return res;
}