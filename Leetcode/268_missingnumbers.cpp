#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    //bruteforce
        for(int i = 0;i<nums.size()+1;i++){
            if(find(nums.begin(),nums.end(),i)==nums.end()){
                return i;
            };
        }
    return 0;
    }

class Solution {
public:
int missingNumber(vector<int>& nums) { //O(n)
    int actualsum = 0;
        for (int i = 0;i<nums.size();i++){
            actualsum+=nums[i];
        };
        int expectedSum = nums.size()*(nums.size()+1)/2;
      int missingnum = expectedSum-actualsum;
    return missingnum;
    }
};


    int main(){
    vector<int> n = {1,2,3,4};
    cout<<missingNumber(n);
}