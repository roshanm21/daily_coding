#include <iostream>
#include <vector>
using namespace std;

int main(){
    string s = "pwwkew";
    int size = 0;
    vector<char> store = {};
    
    for(char p : s){
        if(s[size] == s[size+1]){
            cout<<endl;
        }else {
            auto finf = find(store.begin(),store.end(), p);
            if(finf == store.end()){
                cout<<p;
                store.push_back(p);
            };
        }
        size ++;
        
    }

}
