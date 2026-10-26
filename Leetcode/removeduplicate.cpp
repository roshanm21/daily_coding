#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;
        for(int i = 1;i<nums.size();i++){
            if(nums[i] != nums[k-1]){
                nums[k] = nums[i];
                k+=1;
            }
        }
    return k;
}
    
};

int main(){
    vector<int> inpnum = {0,0,1,1,1,2,2,3,3,4};
    Solution test = Solution();
    cout<<test.removeDuplicates(inpnum);
}