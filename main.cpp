#include <iostream>
#include <vector>
using namespace std;
//extern int search(vector<int> &nums, int target);
//extern int removeElement(vector<int> &nums, int target);
//extern int sortedSquares(vector<int>& nums);
//extern int minSubArrayLen(int target, vector<int>& nums);
//extern vector<vector<int>> generateMatrix(int n);
//extern bool isAnagram(string s, string t);
extern vector<int> twoSum(vector<int>& nums, int target);

void lc1(){
    vector<int>a={2,7,11,15};
    int target=9;
    vector<int>res= twoSum(a,target);
    for (int i = 0; i < res.size(); ++i) {
        cout<<res[i]<<endl;
    }
}

int main() {
    vector<vector<int>>res;
    vector<int>temp;
    temp.insert(temp.begin(),1);
}

