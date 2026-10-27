#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int s{};
    int n{};
    int IndexToRemove{};
    int RangeS{};
    int RangeE{};
    cin>>s;
    vector<int> v = {};
    for(int j{0};j<s;j++){
        cin>>n;
        v.push_back(n);
    }
    cin>>IndexToRemove;
    cin>>RangeS>>RangeE;
    for(;RangeE>RangeS;RangeS++){
        v.erase(v.begin()+RangeS);
        cout<<'|'<<RangeS<<'|'<<RangeE <<endl;
    }
    
    for(int k : v){
        cout<<k;
    }
    return 0;
}
