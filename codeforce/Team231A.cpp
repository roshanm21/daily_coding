#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int q{};
    if(!(cin>>q)) return 0;
    int doin = 0;
    int store[3] = {};
    for(int j{}; j<q ; j++){
        for(int k = 1; k<4; k++){
            int lg{};
            cout<<"inputinner"<<k<<endl;
            cin>>lg;
            store[k-1] = lg;
            if((k-1) == 1 && store[k-2] == 1){
                doin++;
            }
        }
        }

    cout<<doin;
}