#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
    
public:
    bool isValid(string s) {
        bool flag = false;
        for(int i =0;i<size(s);i++){
            char k = s[i];
            switch (k)
            {
            case '(':
                if(s[i+1]==')'){
                 flag = true;
                 cout<<") close";
                }
                break;
                case '{':
                if(s[i+1]=='}'){
                 flag = true;
                 cout<<"} close";
                }
                break;
                case '[':
                if(s[i+1]==']'){
                 flag = true;
                 cout<<"] close";
                }
                break;
            default:
                if(!flag){
                    cout<<"exception";
                    return false;
                }
                break;
            }
        }
    return flag;
    }
};

int main(){
    Solution testcase = Solution();
    cout<<testcase.isValid("()");
}