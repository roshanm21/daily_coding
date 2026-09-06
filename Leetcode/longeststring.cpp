#include <iostream>
#include <vector>
using namespace std;

int main(){
    string s = "pwwkew";
    int size = 0;
    vector<char> store = {};
    
    // for(char p : s){
    //     if(s[size] == s[size+1]){
    //         store.clear();
    //     }else {
    //         auto finf = find(store.begin(),store.end(), p);
    //         if(finf == store.end()){
    //             store.push_back(p);
    //             cout<<p;
    //         };
    //     }
    //     size++;
        
    // }
    // cout<<size;
    for(char p : s){
        size++;
        cout<<p <<' '<<size <<endl;
        

    }

}
