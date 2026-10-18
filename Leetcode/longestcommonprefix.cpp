#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        if(size(strs)==1 && size(strs[0])==1){
            cout<<strs[0];
            return strs[0];
        }
        string result = "";
        string FirstWord = strs[0];
        string LastWord = strs[size(strs)-1];
        int MinLength = min(FirstWord.length() ,LastWord.length());
        for(int i{0};i<MinLength;i++){
            char FirstWordIterate = FirstWord[i];
            char LastWordIterate = LastWord[i];
            if(FirstWordIterate == LastWordIterate){
                result+=FirstWordIterate;
            }else{
                cout<<result;
                return result;
                
            }
        }
    return result;
    }
};


int main(){
    Solution test = Solution();
    vector<string> words = {"a"};
    test.longestCommonPrefix(words);
}