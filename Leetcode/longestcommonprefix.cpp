#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string result = "";
        int dex = 0;
        bool flag = true;
        
        while(flag){
            char cur = strs[0][dex];
            for (string k : strs){
                if(cur!=k[dex]){
                    flag = false;
                }
                
            }
            
            dex+=1;
            if(flag){result+=cur;}
            
        
        }
            cout<<result;
        return "";
    }
};


int main(){
    Solution test = Solution();
    vector<string> words = {"fan","fall","faith"};
    test.longestCommonPrefix(words);
}