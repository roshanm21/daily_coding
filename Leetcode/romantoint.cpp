#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    int romanToInt(string s){
        int theint{0};

        unordered_map <char,int> romanset = { {'I' , 1} , {'V',5},{'X', 10},{'L', 50},{'C', 100},{'D', 500},{'M', 1000}};
        for(int i = 0;i<size(s);i++){
            if(i+1<size(s) && romanset[s[i]] < romanset[s[i+1]]){
                theint -= romanset[s[i]];
            }else{
                theint += romanset[s[i]];
            }
    }
    cout<<theint;
    return theint;
};


};
int main(){
    Solution test = Solution();
    test.romanToInt("MCMXCIV");
}