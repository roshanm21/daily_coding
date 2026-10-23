#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        vector<int> expected = {};
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == nums[i+1]){
                k+=1;
            }else{
                expected.push_back(nums[i]);
            }

        }
    return k;
}
    
};

int main(){
    vector<int> inpnum = {0,0,0,1,1,1,2,2};
    Solution test = Solution();
    cout<<test.removeDuplicates(inpnum);
}