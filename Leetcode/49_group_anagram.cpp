#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //Brute Force
        vector<vector<string>> box = {};
        for(string s : strs){
            for(string t : strs){
                sort(s.begin(),s.end());
                sort(t.begin(),t.end());
                if(s==t){
                    box.push_back({s,t});
                }
            }
            
            
        }
    }
};

int main(){
    vector<string> S1 = {"act","pots","tops","cat","stop","hat"};
    Solution testing = Solution();
    testing.groupAnagrams(S1);
}