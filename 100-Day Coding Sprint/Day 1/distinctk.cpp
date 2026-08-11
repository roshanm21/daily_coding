#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> mainstack = {};
    vector<string> dstack = {};
    int num{};
    cin>>num;
    for(int i{0} ; i<num ; i++){
        string curr;
        cin>>curr;
             
        auto it = find(mainstack.begin(), mainstack.end(), curr);
        if(it == mainstack.end()){
            dstack.push_back(curr);
        }else {
            mainstack.push_back(curr);
        }
    };
    int q{};
    cin>>q;
    for(string j : dstack){
        cout<<j;
    };
    return 0;
}