#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<char> store = {};
        int count = 0;
        for(char k : s){
           auto dat = find(store.begin(),store.end(),k);
            if(dat != store.end()){
                cout<<k<<endl;
                store = {};
                 cout<<count;
                --count;
            }else{
                cout<<"Pushed "<<k<<endl;
                store.push_back(k);
                 cout<<count;
                ++count;
            }
        };
        cout<<count;
    return 0;
}
    
};

int main(){
 Solution testcase = Solution();
 testcase.lengthOfLongestSubstring("abcabcbb");
}
