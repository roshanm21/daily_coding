#include <iostream>
#include <vector>
using namespace std;

int main(){
    string s = "abcabcbb";
    int size = 0;
    for(char p : s){
        if(s[size] == s[size+1]){
            break;
            cout<<endl;
        }else {
            cout << p;
        }
        size ++;
        
    }



}
