#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
    if(s==t){
            return true;
        }else{
            return false;
        }

    }
};

int main(){
    string S1 = "carrace";
    string S2 = "racecar";
    Solution testing = Solution();
    cout<<testing.isAnagram(S1,S2);
}