#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int guess = x;
        while(true){  
        int newguess = 1/2*(guess+x/guess);
        
        return newguess;
        guess = newguess;
        }
        
    }
};

int main(){
    Solution test = Solution();
    test.mySqrt(25);
}