#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
     int mySqrt(int x) {
        long long guess = x;
        for(;guess*guess>x;){
            guess = (guess+(x/guess))/2;
        }
        return guess;
    }
};

int main(){
    Solution test = Solution();
    cout<<test.mySqrt(3);
}