#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        bool flag = false;
        for(char k : s){
           if(t.find(k)){
                flag = true;
           }
        }
    return flag;
    }
};

int main(){
    string S1 = "carrahce";
    string S2 = "racedar";
    Solution testing = Solution();
    cout<<testing.isAnagram(S1,S2);
}