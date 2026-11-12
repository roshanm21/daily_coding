#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> store = { };
        for(int i = 1;i<(n+1);i++){
            if(i%5==0 && i%3==0){
                store.push_back("FizzBuzz");
            }else if(i%5==0) {
                store.push_back("Fizz");
            }else if(i%3==0) {
                store.push_back("Buzz");
            }else{
                store.push_back(to_string(i));
            } 
        }

        // for(string k : store){
        //     cout<<k<<endl;
        // }
        return store;
    }
 };
int main(){
    Solution test = Solution();
    test.fizzBuzz(3);
 }