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

    int main(){
    vector<int> n = {1,2,3,4};
    cout<<missingNumber(n);
}