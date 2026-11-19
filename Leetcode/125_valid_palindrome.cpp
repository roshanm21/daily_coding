#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        for(int i = s.size()-1;i>=0;i--){
            if((int)s[i] >= 65 && (int)s[i] <= 90 || (int)s[i] >= 97 && (int)s[i] <=122 || (int)s[i] >= 48 && (int)s[i] <=57  ){  
                    t+=tolower(s[i]);
            }
            
        }
        
        string cleaner;
        for(char k : s){
            if((int)k >= 65 && (int)k <= 90 || (int)k >= 97 && (int)k <=122 || (int)k >= 48 && (int)k <=57  ){
                        cleaner+= tolower(k);
                }
        }
        if(cleaner==t){
            return true;
            
            
        }else {

            return false;
        }
    }
};

int main(){
    vector<int> nums = {1,2,6,7,5,3,4,7};
    Solution testing = Solution();
    testing.isPalindrome("tac a cat");
}