#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
        for(int i = 0;i<nums.size()-1;i++){
            if((nums[i]+1)!=nums[i+1]){
                return nums[i]+1;
            }
        }
    }

    int main(){
    vector<int> n = {1,2,3,4};
    cout<<missingNumber(n);
}