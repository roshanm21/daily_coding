#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool flag = false;
        sort(nums.begin(), nums.end()); //sorting it gets our work easier but we will have higher time complexity
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                flag = true;
                break;
            }
        }
        return flag;
    }
};

int main(){
    vector<int> nums = {1,2,6,7,5,3,4,7};
    Solution testing = Solution();
    testing.hasDuplicate(nums);
}