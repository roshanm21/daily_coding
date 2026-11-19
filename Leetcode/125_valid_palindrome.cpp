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
            if((int)s[i] < 58 || (int)s[i] > 64 && (int)s[i] < 91 || (int)s[i] >96 ){
                if( (int)s[i] != 32){
                    t+=tolower(s[i]);
                }
            }
            
        }
        
        string cleaner;
        for(char k : s){
            if((int)k <= 58 || (int)k >= 64 && (int)k <= 91 || (int)k >=96 ){
                if( (int)k != 32){
                    cleaner+= tolower(k);
                }}
        }
        if(cleaner==t){
            cout<<"true";
            return true;
            
            
        }else {
            cout<<cleaner <<" / "<<t;
            return false;
        }
    }
};

int main(){
    vector<int> nums = {1,2,6,7,5,3,4,7};
    Solution testing = Solution();
    testing.isPalindrome("abc,, !, :, {ba");
}