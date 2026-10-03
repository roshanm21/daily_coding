#include <iostream>
#include <string>
using namespace std;
class Solution
{
public:
    int romanToInt(string s){
        int theint{0};
        char x;
        for(char k : s){
                switch (k)
                        {
                        case 'I':
                            ++theint;
                            break;
                        case 'V':
                            theint += 5;
                            break;
                        case 'X':
                            theint += 10;
                            break;
                        case 'L':
                            theint += 50;
                            break;
                        case 'C':
                            theint += 100;
                            break;
                        case 'D':
                            theint += 500;
                            break;
                        case 'M':
                            theint += 1000;
                            break;

                        default:
                            break;
                        }
        }
       
        cout<<theint;
    }
};

int main(){
    Solution test = Solution();
    test.romanToInt("XVII");
}