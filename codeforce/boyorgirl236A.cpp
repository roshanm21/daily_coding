#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string name;
    cin>>name;
    vector<char> dist = {};
    
    for(char k : name){
        auto val = find(dist.begin() , dist.end() ,k);
        if(val != dist.end()){
        }else{
            dist.push_back(k);
        }
        cout << dist.size();
    }
    if((dist.size()%2)==0){
        cout<<"CHAT WITH HER!";
    }else {
        cout<< "IGNORE HIM !";
    }
}
