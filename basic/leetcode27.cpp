using namespace std;
#include <vector>
int removeElement(vector<int>& nums, int val) {
    int temp=0;
    for (int i = 0; i < nums.size(); ++i) {
        if(nums[i]==val){
            temp++;
        } else{
            nums[i-temp]=nums[i];
        }
    }


}