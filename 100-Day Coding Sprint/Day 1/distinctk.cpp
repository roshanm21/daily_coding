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
    int num{}; string curr;
    cin>>num;
   
    for(int i{0} ; i<num ; i++){
        cin>>curr;
        mainstack.push_back(curr);
    };
 
    int q{};
    cin>>q;
    for(string j : mainstack){
        cout<<j;   
    auto it = find(dstack.begin(), dstack.end(), curr);
    if (it == mainstack.end())
    {
        dstack.push_back(curr);
    }
    };
    cout<<dstack[q];
    return 0;
}